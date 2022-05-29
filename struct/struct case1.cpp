#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int score;

};

struct teacher
{
    string name;
    struct student s[5];
};

void allocateSpace(struct teacher *p, int len)
{
    string nameSeed = "ABCDE";
    for(int i = 0; i<len; i++)
    {
        (p+i)->name = "teacher_";
        (p+i)->name += nameSeed[i];

        for(int j = 0; j< 5; j++)
        {
            (p+i)->s[j].name = "student_";
            (p+i)->s[j].name += nameSeed[j];
            (p+i)->s[j].score = 100;

        }
    }
}
void printInfo(struct teacher *p, int len)
{
    for(int i = 0; i< len; i++)
    {
        cout << "teacher info: " << (p+i)->name << endl;

        for(int j = 0; j< 5; j++)
        {
            cout << "student:" << (p+i)->s[j].name
                << "\tscore: " << (p+i)->s[j].score << endl;

        }
    }
}
int main()
{
    struct teacher t[3];
    teacher *p = t;
    allocateSpace(p, 3);
    printInfo(p, 3);

    int len = sizeof(t) / sizeof(t[0]);



}