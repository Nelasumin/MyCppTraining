#include "iostream"
#include "sys/types.h"
#include "sys/stat.h"
#include "fcntl.h"
#include "dirent.h"
#include "stdlib.h"
#include "stdio.h"
#include "errno.h"
#include "string.h"
#include <cstddef>
#include <cstdlib>
#include <dirent.h>
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
    DIR *dir = opendir(".");
    struct dirent *de;
    while ((de = readdir(dir)) != NULL) 
    {   
        if(strncmp(de-> d_name, ".", 1) == 0)
        {
            continue;
        }
        printf("%s\n",de->d_name);
    }
    closedir(dir);
    exit(EXIT_SUCCESS);
}

