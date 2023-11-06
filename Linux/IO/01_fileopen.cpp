#include "iostream"
#include "stdio.h"
#include "stdlib.h"

int main()
{

    printf("fileno(stdin) = %d\n",fileno(stdin));
    std::cout << "fileno(stdin)" << fileno(stdin) << std::endl;
    std::cout << "fileno(stdout)" << fileno(stdout) << std::endl;
    std::cout << "fileno(stderr)" << fileno(stderr) << std::endl;
    exit(0);
};
