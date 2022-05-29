#include<iostream>
#include<string>

using namespace std;
//通过指针访问结构体
/*
1.定义结构体
2. 创建结构体数组
3. 给结构体数组中元素赋值
4. 创建结构体指针，遍历结构体数组
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

int main()
{
    //3 elements
    struct Student stdArray[3] = 
    {
        {"zhangsan", 18, 100},
        {"lisi", 23, 68},
        {"wangwu", 32, 65}
    };

    stdArray[2].name = "lisizhizi";
    stdArray[2].age = 12;
    stdArray[2].score = 100;

    Student *p = stdArray;
    //数组本身就是地址，不需要提领符&
    //Student *p = &stdArray;
    

    for(int i = 0; i< 3; i++)
    {
        cout << (p+i)->name << endl;
        cout << (p+i)->age << endl;
        cout << (p+i)->score << endl;

    }
    return 0;

}
