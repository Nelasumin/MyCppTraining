#include <iostream>


class Student
{
	// 访问限制符 - 公有属性
public:

	Student()
	{

	}
	~Student()
	{

		std::cout << "销毁对象" << std::endl;
	}

	//成员函数
	inline void setName(std::string name1)
	{
		this->name = name;
	}
	inline std::string getName()const
	{
		return name;
	}
	inline void setAge(int age)
	{
		this->age = age;
	}
	inline int getAge() const
	{
		return age;
	}
	//私有的变量
private:
	std::string name;
	int age;

};

