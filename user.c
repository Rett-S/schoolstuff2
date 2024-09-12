//Rett Swyers - CS 4760

#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv) {
                int i; //this integer is used later for the loop
                int x; //this integer will store the user's input
                x = atoi(argv[1]); //this converts the user's input from string to integer
                for (i = 1; i <= x; i++) {   //start of the loop
                        printf("USER PID:%d PPID:%d Iteration:%d before sleeping \n", getpid(), getppid(), i); //gets the PID of the parent and child, and displays them to the user,
                }
                sleep(1);
                printf("USER PID:%d PPID:%d Iteration:%d after sleeping \n", getpid(),getppid(), x); //displays the PID of both parent and child one last time, before closing the process.

                return EXIT_SUCCESS;
