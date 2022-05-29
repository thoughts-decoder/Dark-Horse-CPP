//const 的使用场景
//尽量减少值传递
#include<iostream>
#include<string>

using namespace std;

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

void printStudent(const Student *stu)
{
    //指针，传入时只占四个字节，减少占用
    //结构体作为函数参数
    //打印其所有信息
    // stu->age = 100;
    //(加入const,如有修改值，编辑器会给你报错,防止误操作)
    cout << "name: " << stu->name << "\nage: "
        << stu->age << "\nscore: " << stu->score<< endl;

}

int main()
{
    struct Student s = {"wangl", 13,65};
    const Student *p = &s;
    printStudent(p);

    return 0;

}