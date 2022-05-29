#include<iostream>
#include<string>

using namespace std;
//结构体数组
/*
1.定义结构体
2. 创建结构体数组
3. 给结构体数组中元素赋值
4. 遍历结构体数组
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

    for(int i = 0; i< 3; i++)
    {
        cout << stdArray[i].name << endl;
        cout << stdArray[i].age << endl;
        cout << stdArray[i].score << endl;

    }
    return 0;

}
