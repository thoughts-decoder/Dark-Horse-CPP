#include<iostream>
#include<string>

using namespace std;
//结构体中的结构体
/*

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

struct Teacher
{
    string name;
    int id;
    int age;
    
    struct Student stu; //教的学生
};

int main()
{
    //3 elements
    Teacher t;
    t.id = 1030;
    t.age = 34;
    t.name = "heihei";
    t.stu.name = "wuwu";
    t.stu.age = 18;
    t.stu.score = 100;
    cout << "teacher name: " << t.name << "\nteacher name: "
        << t.id << "\nstudent's name: " << t.stu.name << endl;

    return 0;

}
