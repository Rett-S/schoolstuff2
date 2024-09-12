//Rett Swyers - CS 4760

#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include"string.h"
int main(int argc, char** argv) {

                char* x = "-h"; //x and y is to be used later to compare two strings
                char* y = "-n";

                if (strcmp(argv[1], x) == 0) {
                        printf("-h displays this help message\n-n specifies how many children to launch\n-s indicates how many children to run simultaneously\n-t specifies how many iterations to send to the user\n."); //help message that displays if the user inputs -h
                }
                else if (strcmp(argv[1], y) == 0) { //if -h is not present at all, and -n is, the process continues normally
                        int n = atoi(argv[2]);          //int n stores how many processes to run, based on user input
                        printf("children to launch: %d \n",n);
                        int s = atoi(argv[4]);          //int s stores how many processes are allowed to run at once, based on user input
                        printf("simultaneous children: %d \n",s);
                        int t = atoi(argv[6]);          //int t stores how many iterations the user wants
                        printf("iterations: %d \n",t);

                        int z = 0;      //placeholder integer to keep track of how many processes have been launched total
                        int w = 0;      //placeholder integer to keep track of the current amount of active processes
                        int childPid;   //initializes the child
                        while (z < n) {
                                if (w < s) {
                                        childPid = fork(); //finally, we fork
                                        w++;
                                        if (childPid == 0) {
                                                char* args[] = {"./user", argv[2]};
                                                execlp(args[0],args[1]); //this sends info to run the user executable
                                        } else {
                                                z++;
                                        }
                                } else {
                                        for (int i = 0; i < z; i++) {
                                                w--; //this subtracts the amount of active processes
                                                break;
                                        }
                                }
                        }
                }
                return EXIT_SUCCESS;
}
