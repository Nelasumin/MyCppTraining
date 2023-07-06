// ReSharper disable CppClangTidyClangDiagnosticInvalidUtf8
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 初始化
	string s1 = "Hello";
	string s2 = "My name is Asahi2000";
	// size() 和 length() 都是返回字符串的长度
	cout << "s1.size = " << s1.size() << endl;
	cout << "s1.length = " << s1.length() << endl;

	// 需要注意 capacity() 是返回 string 的当前容量，
	// string 本身是一个数组，
	// 所以 capacity() 返回的长度可能会大于
	// size() 或者 length() 返回的长度
	cout << "s1.capacity() = " << s1.capacity() << endl;

	// s1.at(i) 和 s1[i] 都是访问位置 i 的字符
	cout << "s1.at(1) = " << s1.at(1) << endl;
	cout << "s1[i] =  "  << s1[1] << endl;

	// find() 查到字符，找到返回字符串位置，否则返回 -1
	cout << "s1.find('e') = " << s1.find('e') << endl;

	// 指定起始位置查到
	cout << "s2.find(\"is\", 4) = " << s2.find("is", 4) << endl;
	// 逆序查找
	cout << "s2.rfind(\"is\") = " << s2.rfind("is") << endl;

	// 判断字符串是否为空
	if (s1.empty()) {
		cout << "s1 is empty." << endl;
	}
	else {
		cout << "s1 is not empty." << endl;
	}

	// 判断字符串是否相等 //结果是不相等 因为是小写的hello
	if (s1 == "hello") { 
		cout << "s1 == hello" << endl;
	}
	else {
		cout << "s1 != hello" << endl;
	}

	//类型转换
	// string --> int
	string s3 = "1314";
	cout << "stoi(s3) = " << stoi(s3) << endl;
	// string --> float
	string s4 = "3.1415";
	cout << "stof(s4) = " << stof(s4) << endl;

	return 0;
}
