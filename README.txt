1. First and foremost, if the executables are not there, use the "make" command to run the makefile to create executables for user and oss
2. Afterward, you can enter "./user 5" to run the user executable, which will loop 5 times
3. To run the oss executable, type in "./oss -h" to display it's help command. The help command shows how to run the oss executable, with other user inputs
4. For example, if you input "./oss -n 5 -s 3 -t 7", it will run 5 child processes total, but only run 3 at a time, while each child loops a total of 7 times each.
5. Assuming anything goes wrong and things begin to infinitely loop, you can always hold Control and press C to kill the processes.