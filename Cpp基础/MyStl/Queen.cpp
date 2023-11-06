#include <cstddef>
#include <cstdlib>
#include<iostream>
#include "string.h"

template<class T>
class Queue
{
    T* _list;
    int _front;
    int _tail;

public:
    Queue():_list(nullptr),_front(0),_tail(0)
    {
    
    }


    bool push(const T& value)
    {
        if(!_list)
        {
            _list = new T{value};
            _tail++;
            return true;
        }

        else 
        {
            T* temp = new T[_tail - _front+1]{};
            memcpy(temp,_list+_front,(_tail-_front)*sizeof(T));
            _tail = _tail- _front;
            temp[_tail++] = value;
            free(_list);
            _list = temp;
            if(_front !=0)
            {
                _tail = _tail - _front;
                _front = 0;
            }
            return true;
        }

/**        else
        {
            _list = (T*) realloc(_list, (_tail - _front +1) *sizeof(T));
            _list[_tail++] =value;
            if(_front != 0)
            {
                _tail =_tail - _front;
                _front = 0;

            }
            return true;
        }
**/


        return false;

    }

    void pop_front()
    {
        if(empty())
        {
            return;
        }
        _front++;


    }

    T front()
    {
        if(!empty())
            return _list[_front];
        return {};
    }

    bool empty()
    {
        return _front == _tail;
    }

    size_t Size()
    {
        return _tail - _front;
    }




};



int main()
{
    Queue<int> list;
    char arr = ['1',2];
    for(int value:arr)
    {   
        list.push(value);

    }
    while (!list.empty()) 
    {
    std::cout << list.front() << " ";
    list.pop_front();
    }
    return 0;

}