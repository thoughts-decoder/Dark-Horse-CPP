#include<iostream>
#include<string>

using namespace std;
//结构体作为函数参数
/*
传递方法
1. 值传递
2. 地址传递
*/
struct Student
{
    //成员列表
    //name
    string name;

    //age
    int age;
    //score
    int score;
};

//值传递
void printStudent(Student stu)
{
    //结构体作为函数参数
    //打印其所有信息
    stu.age = 100;
    cout << "name: " << stu.name << "\nage: "
        << stu.age << "\nscore: " << stu.score<< endl;

}

//址传递
void printStudent2(Student &stu)
{
    //结构体作为函数参数
    stu.age = 100;
    //打印其所有信息
    cout << "name: " << stu.name << "\nage: "
        << stu.age << "\nscore: " << stu.score<< endl;

}

int main()
{
    struct Student s;
    s.name = "zhangsan";
    s.age = 14;
    s.score = 23;
    printStudent(s);
    cout << "name: " << s.name << "\nage: "
        << s.age << "\nscore: " << s.score<< endl;

    printStudent2(s);
    cout << "name: " << s.name << "\nage: "
        << s.age << "\nscore: " << s.score<< endl;

    return 0;
}
