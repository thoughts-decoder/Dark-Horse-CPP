//自己的通用的数组类
#pragma once
#include <iostream>
using namespace std;

template<class T>
class myArray
{
    private:
    T * paddrss;    //指向堆区开辟的真实数组
    int m_capacity;     //数组容量
    int m_size;         //

    public:
    myArray(int capacity)
    {
        cout << "有参构造调用" << endl;

        this->m_capacity = capacity;
        this->m_size = 0;
        this->paddrss = new T[this->m_capacity];

    }
    ~myArray()
    {
        cout << "析构调用" << endl;
        
        if(this->paddrss != NULL)
        {
            
            delete [] this->paddrss;
            this->paddrss = NULL;
        }
    }
    //拷贝构造
    myArray(const myArray & arr)
    {
        cout << "拷贝构造调用" << endl;
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        //深拷贝
        this->paddrss = new T[arr.m_capacity];
        //将arr中的数据都拷贝过来
        for(int i = 0; i < this->m_size; i++)
        {
            this->paddrss[i] = arr.paddrss[i];
        }
    }

    //operator = 防止浅拷贝问题 a= b = c
    myArray& operator = (const myArray & arr)
    {
        cout << "等号调用" << endl;

        //先判断原来堆区是否有数据，如果有，先释放
        if(this->paddrss != NULL)
        {
            delete [] this->paddrss;
            this->paddrss = NULL;
            this->m_capacity = 0;
            this->m_size = 0;

        }
        //深拷贝
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        this->paddrss = new T[arr.m_capacity];
        //将arr中的数据都拷贝过来
        for(int i = 0; i < this->m_size; i++)
        {
            this->paddrss[i] = arr.paddrss[i];
        }
        return *this;
    }

    //尾插法
    void push_back(const T & val)
    {
        //判断容量是否等于大小
        if(this->m_capacity == this->m_size)
        return ;
        this->paddrss[this->m_size] = val;//在末尾插入数据
        this->m_size++;//更新数组大小
    }

    //尾删法
    void pop_back()     //本不需要参数
    {
        //让用户访问不到最后一个元素，即为尾删，逻辑删除
        if(this->m_size == 0)
        return ;
        this->m_size--;
    }

    //通过下标访问数组中的元素
    //重载中括号【】
    T& operator [] (int num)        //operator写错
    {
        return this->paddrss[num];

    }

    //返回数组容量
    int getCapacity()
    {
        return this->m_capacity;
    }

    //返回数组大小 
    int getSize()
    {
        return this->m_size;
    }
};