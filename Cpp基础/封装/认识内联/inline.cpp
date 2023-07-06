#include <iostream>
using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

inline int min(int a, int b)
{
    return a > b ? b : a;
}

int main()
{
    int a = 5, b = 7;
    // 普通函数求最大值
    cout << "max(a, b) = " << max(a, b) << endl;

    // 内联函数求最小值
    cout << "min(a, b) = " << min(a, b) << endl;

    return 0;
}
