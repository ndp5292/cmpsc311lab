
/**
Program to Demonstrate Race Condition
**/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
void main(){

    int fd, i;


    fd = open("./info.dat", O_RDWR);
    if ( fd < 0 )
    {
        sleep (10);
        fd = open("./info.dat", O_RDWR | O_CREAT, 0666);
        if ( fd > 0) {
            printf("\n Program2 created info.dat \n");
            close(fd);
        }
    }

}


