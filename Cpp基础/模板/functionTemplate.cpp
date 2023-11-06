#include <iostream>
#include <string>


//普通函数可以与函数模板进行重载
//普通函数优先于模板函数执行


template<typename T> //模板参数列表
T add(T x, T y)
{   
    std::cout << "T add(T,T)" << std::endl;
    return x+y;
}
// int 类型模板和类型都有的情况下 会调用类型 普通函数优先与函数模板执行
int add(int x,int y)
{   
    std::cout << "int add(T,T)" << std::endl;
    return x+y;
}


void test()
{
    int ia = 3, ib =4;
    double da = 3.3,db = 8.8;
    std::string s1 = "hello" ,s2 ="No hello";
    std::cout << "add(ia, ib) =" <<add(ia, ib) <<std::endl;
    std::cout << "add(s1, s2) =" <<add(s1, s2) <<std::endl;
}


int main(int argc,char **argv)
{
    test();
    return 0;
}
