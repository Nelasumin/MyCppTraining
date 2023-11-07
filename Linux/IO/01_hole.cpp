#include "iostream"
#include "sys/types.h"
#include "sys/stat.h"
#include "fcntl.h"

#include "stdlib.h"
#include "stdio.h"
#include "errno.h"
#include "string.h"
#include <cstdlib>
#include <fcntl.h>
#include <unistd.h>

//封装错误宏 
// #define ERR_EXIT(m) (perror(m),exit(EXIT_FAILURE))
#define ERR_EXIT(m) \
    do \
    { \
        perror(m); \
        exit(EXIT_FAILURE); \
    } while(0) 



int main(int argc, char *argv[])
{
    int fd = open("hole.txt",O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if(fd == -1)
    {
        ERR_EXIT("Open error");

    }
    write(fd, "Mybad", 5);
    int ret = lseek(fd, 1024, SEEK_CUR);
    if(ret == -1)
    {
        ERR_EXIT("lseek error");
    }

    write(fd, "1024*", 5);
    
    close(fd);
    exit(EXIT_SUCCESS);
}

