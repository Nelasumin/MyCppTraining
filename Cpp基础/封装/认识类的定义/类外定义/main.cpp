#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
	Student* stu = new Student;
	stu->setName("Spice");
	stu->setAge(12);
	cout << "名字是：" << stu->getName()
		<< "年龄是：" << stu->getAge();

	//释放资源
	delete stu;
	// 释放指针
	stu = nullptr;
	return 0;
}
