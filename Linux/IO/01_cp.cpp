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
    int infd;
    int outfd;
    if(argc != 3)
    {
        fprintf(stderr, "Usage %s src dest\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    infd = open(argv[1],O_RDONLY);
    if(infd == -1)
    {
        ERR_EXIT("OPEN SRC ERROR");
    }
    if((outfd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644)) == -1)
    {
        ERR_EXIT("error dest fd");
    }

    //定义缓冲区
    char buf[1024];
    int nread;
    while ((nread = read(infd,buf, 1024))>0) 
    {
        write(outfd,buf,nread);
    }

    close(infd);
    close(outfd);
    exit(EXIT_SUCCESS);
}

