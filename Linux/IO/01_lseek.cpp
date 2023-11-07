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
    int fd = open("test.txt", O_RDONLY);
    if(fd == -1)
    {
        ERR_EXIT("Open error");
    }

    char buf[1024]={0};
    int ret = read(fd, buf, 5);
    if(ret == -1)
    {
        ERR_EXIT("Read Error");
    }
    ret = lseek(fd, 0, SEEK_CUR);
    if (ret == -1) {
    ERR_EXIT("lseek ERROR");
    }
    std::cout << buf <<std::endl;
    std::cout <<"Ret is =" << ret << std::endl;

    exit(EXIT_SUCCESS);
}