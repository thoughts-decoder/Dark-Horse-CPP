#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//vector容器存放内置数据类型


void myprint(int val)
{
    cout << val << endl;
}

void test1()
{
    //创建一个vector,int 的容器
    vector<int> v;

    //容器中插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // //通过迭代器访问
    // vector<int>::iterator itBegin = v.begin();
    // vector<int>::iterator itEnd = v.end();
    // //指向最后一个元素的下一个位置

    // //第一种遍历方式
    // while(itBegin != itEnd)
    // {
    //     cout << *itBegin << endl;
    //     itBegin++;
    // }

    // //第二种遍历
    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    //第三种遍历，利用STL中提供的遍历算法
    //需要包含标准算法头文件 algorithm
    //开始，结束指针、以及函数名
    for_each(v.begin(), v.end(), myprint); 
}

int main()
{
    test1();
    return 0;
}