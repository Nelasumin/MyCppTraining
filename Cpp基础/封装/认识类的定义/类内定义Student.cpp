#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student() {}
    ~Student() {}
    // 定义成员函数并实现功能
    void setName(string name) { this->name = name; }
    string getName() const { return name; };
    void setAge(int age) { this->age = age; }
    int getAge() const { return age; }
private:
    string name;
    int age;
};

int main()
{
    Student stu;
    stu.setName("jake");
    stu.setAge(15);
    cout << "My name is " << stu.getName() << ", I'm "
	<< stu.getAge() << " years old." << endl;

    return 0;
}
