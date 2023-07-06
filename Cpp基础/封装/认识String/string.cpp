/#include <iostream>
#include <string>

int main()
{
	int n = 4;
	//s1 为空字符串
	std::string s1;
  //s2 初始值为 "ABC"
  std::string s2 = "abc";
	//s3 初始化为 s2 的一个副本
	std::string s3 = s2;
	//s4 初始化为字符 'c' 的 n 个副本
	std::string s4(n, 'c');
	//string 的常用操作;
	// 结果为 hello abc world
	std::string s5 = "hello " + s2 + " world";
	// 结果为 helloabc
	std::string s6 = "hello" + s2;
	//错误的写法
	//std::string s7 = "hello"+"ERROR";
}
