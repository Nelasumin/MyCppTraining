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
    // 防止继承shell的umask
    umask(0);
    int fd;
    // O_EXCL 指如果文件已存在直接失败
    fd = open("text1.txt", O_WRONLY | O_CREAT | O_EXCL, S_IRUSR |S_IWUSR);   
    if(fd == -1)
    {
        ERR_EXIT("open_error");
    }

    exit(EXIT_SUCCESS);
};
