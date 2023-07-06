#include <iostream>
#include "CreateStudent.h"


int main()
{
	//栈上实例化
	Student stu1;
	stu1.setName("hELLO");
	stu1.setAge(15);
	std::cout << stu1.getAge() <<std::endl;
	std::cout << stu1.getName() << std::endl;

	Student *stu2 = new Student;
	stu2->setName("Hello");
	stu2->setAge(12);
	std::cout << stu2->getAge() << std::endl;
	std::cout << stu2->getName() <<std::endl;
	delete stu2;
	stu2 = nullptr;
	return 0;
}


