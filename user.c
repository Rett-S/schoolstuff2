//Rett Swyers - CS 4760

#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv) {
                int i;
                for (i =1; i < 6; i++) {
                        printf("USER PID:%d PPID:%d Iteration:%d before sleeping \n", getpid(), getppid(), i);
                }
                sleep(1);
                printf("USER PID:%d PPID %d Iteration:%d after sleeping \n", getpid(),getppid(), 5);

                return EXIT_SUCCESS;
