// Student.h 文件
#ifndef __STUDENT__
#define __STUDENT__
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	Student();
	~Student();
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();

private:
	string name;
	int age{};

};




#endif // __STUDENT__
