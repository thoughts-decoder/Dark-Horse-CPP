#include<iostream>
using namespace std;
//结构体：一些类型的集合
//结构体定义
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

//通过学生类型创建具体学生
//struct Student s1;
//struct Student s2 = {...}
//定义结构体时顺便创建结构体变量

int main()
{
    struct Student s1;

    s1.name = "guoyan";
    s1.age = 12;
    s1.score = 100;
//struct Student s2 = {...}
//结构体变量创建时，struct关键字可以省略
    Student s2 = {"dkgj", 23, 60};


    cout << "name: " << s1.name << "age: " << s1.age
        << "score: " << s1.score << endl;
    cout << "name: " << s2.name << "age: " << s2.age
        << "score: " << s2.score<< endl;

    return 0;
}
