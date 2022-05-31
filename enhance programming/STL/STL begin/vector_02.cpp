#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//vector容器存放自定义数据类型



class Person
{
    public:
    Person(string name, int age)
    {
        this->Name = name;
        this->Age = age;


    }

    // private:
    string Name;
    int Age;
};
void myprint(vector<Person>::iterator v)
{
    //把v当做一个指向person对象的指针，有这两种方法
    cout << "Name is : "<< v->Name << " Age is : "<< v->Age << endl;
    cout << "Name is : "<< (*v).Name << " Age is : "<< (*v).Age << endl;

}

void test1()
{
    vector<Person> v;
    Person p1("aaa", 10);
    Person p2("aga", 20);
    Person p3("gha", 30);
    Person p4("fda", 40);
    Person p5("agha", 50);
    Person p6("aahj", 10);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    v.push_back(p6);

    for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        myprint(it);

    }
}


void myprint(vector<Person*>::iterator v)
{
    //把v是指向person* 的指针，则(*v)为指向person对象的指针，有这两种方法
    cout << "Name is : "<< (*v)->Name << " Age is : "<< (*v)->Age << endl;
    cout << "Name is : "<< (**v).Name << " Age is : "<< (**v).Age << endl;

}

//存放自定义数据类型的指针

void test2()
{
    vector<Person*> v;
    Person p1("aaa", 10);
    Person p2("aga", 20);
    Person p3("gha", 30);
    Person p4("fda", 40);
    Person p5("agha", 50);
    Person p6("aahj", 10);

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);
    v.push_back(&p6);

    for(vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
    {
        myprint(it);

    }
}
int main()
{
    // test1();
    test2();
    return 0;
}

