#include "iostream"
#include "functional"
#include <array>
#include <cstddef>
using std::cout;
using std::endl;
using std::less;
using std::greater;

template<class T>

void swap(T &a, T&b)
{
    T t = a;
    a = b;
    b =t ;
}
template <class T,class C>

void sort(T *arr,size_t len, C compare)
{
    if(len>1)
    {
        size_t low = 0;
        
    }

}