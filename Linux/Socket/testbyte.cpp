#include "iostream"
#include "stdio.h"
#include <endian.h>
#include "arpa/inet.h"
using namespace std;


int main()
{
    unsigned int x =0x12345678;
    unsigned char *p =(unsigned char*)&x;
    printf("%0x %0x %0x %0x",p[0],p[1],p[2],p[3]);
    unsigned int y = htons(x);
    p = (unsigned char*)&y;
    cout << endl;
    printf("%0x %0x %0x %0x",p[0],p[1],p[2],p[3]);


    return 0;

}