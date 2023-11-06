#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include <fcntl.h>
#include <cerrno>
#include <cstdlib>
#include <iterator>
#include <sys/types.h>
#include <sys/stat.h>
#include "fcntl.h" 
#include "string.h"


//封装错误宏 
// #define ERR_EXIT(m) (perror(m),exit(EXIT_FAILURE))
#define ERR_EXIT(m) \
    do \
    { \
        perror(m); \
        exit(EXIT_FAILURE); \
    } while(0) 

int main()
{
    int fd;
    //通过只读的方式打开    -1为打开失败
    fd = open("test.txt", O_RDONLY);
   /* if(fd == -1)
    {
        fprintf(stderr, "open error with errno=%d\n", errno);
        std::cout << fileno(stderr) << "open error with errno" << errno << std::endl;
        fprintf(stderr, "open error with errno=%d %s \n", errno,strerror(errno));
        std::cout << strerror(errno)<< std::endl;
        exit(EXIT_FAILURE);
    }
    */

  /* if(fd == -1)
    {
        perror("open error ");
        exit(EXIT_FAILURE);
    }
    */

    if(fd == -1)
    {
        ERR_EXIT("Open error");
    }

    printf("open succ\n");
    exit(EXIT_SUCCESS);
};
