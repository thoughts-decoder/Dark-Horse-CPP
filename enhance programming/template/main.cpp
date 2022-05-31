#include "myArray.hpp"

void printarr(myArray<int> & arr)
{
    for(int i = 0; i< arr.getSize(); i++)
    {
        cout << arr[i] << endl;
    }  
}


void test1()
{
    // myArray arrl(5);//没有与参数列表匹配的构造函数 "myArray" 实例
    myArray<int> arr1(5);

    // myArray<int> arr2(arr1);

    // myArray<int> arr3(100);
    // arr3 = arr1;

    for(int i = 0; i< 5; i++)
    {
        arr1.push_back(i);
        cout << "arr1的输出为： "<< endl;
        printarr(arr1);
    }
    cout << "capacity: " << arr1.getCapacity() << endl;
    cout << "size: " << arr1.getSize() << endl;

    //尾删
    arr1.pop_back();
    cout << "capacity: " << arr1.getCapacity() << endl;
    cout << "size: " << arr1.getSize() << endl;


}

class Person
{
public:
    Person() {}
    Person(string name, int age)
    {
        this->m_name = name;
        this->m_age = age;
    }

// private:
    string m_name;
    int m_age;
};

void Personprintarr(myArray<Person> & arr)
{
    for(int i = 0; i< arr.getSize(); i++)
    {
        cout << "xingming" << arr[i].m_name << "nianling: " << arr[i].m_age << endl;
    }  
}

void test2()
{
    myArray<Person> arr(10);
    Person p1("sunwukong", 999);
    Person p2("skdlgjl", 235);

    //数据插入数组
    arr.push_back(p1);
    arr.push_back(p2);
    Personprintarr(arr);
    cout << "capacity: " << arr.getCapacity() << endl;
    cout << "size: " << arr.getSize() << endl;

    //尾删
    arr.pop_back();
    cout << "capacity: " << arr.getCapacity() << endl;
    cout << "size: " << arr.getSize() << endl;

}
int main()
{
    // test1();
    test2();
    return 0;
}