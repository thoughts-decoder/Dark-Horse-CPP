#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>



//vector 容器嵌套容器
//容器嵌套容器，理清逻辑

void test1()
{
    //创建一个vector,int 的容器
    vector< vector <int> > v;

    //容器中插入数据
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;

    //向小容器添加数据
    for(int i = 0; i < 4; i++)
    {
        v1.push_back(i + 1);
        v2.push_back(i + 2);
        v3.push_back(i + 3);
        v4.push_back(i + 4);
    }

    //将小容器插入大容器
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    for(vector< vector<int> >::iterator it = v.begin(); it != v.end(); it++)
    {
        //(*it)---容器 vector<int>
        for(vector<int>::iterator itt = (*it).begin(); itt != (*it).end(); itt++)
        {
            cout << (*itt) << "\t";
        }
        cout << endl;
    }


}

int main()
{
    test1();
    return 0;
}