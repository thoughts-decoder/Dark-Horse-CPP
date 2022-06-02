# string 容器

C++风格的字符串， string本质是一个类

## 1 string的基本概念

char * 是一个指针
string是一个类，类内部封装了 char* ，管理这个字符串，是一个 char*型的容器  

![1](images/2022-06-01-14-30-11.png)  

## 2 string构造函数

    string();                       //创建空字符串，string str；
    string(const char* s);          //使用字符串s初始化
    string(const string& str);      //使用一个string对象初始化另一个string对象
    string(int n, char c);          //使用n个字符c初始化

## 3 string赋值操作

初始化后，也可以重新赋值
![2](images/2022-06-01-14-36-47.png)  

    string str1("string!!");
    string str.assign(str1);


## 4 string字符串拼接

![3](images/2022-06-01-14-43-42.png)  

## 5 string查找和替换

![4](images/2022-06-01-14-49-08.png)  
![5](images/2022-06-01-14-53-21.png)  

## 6 string字符串比较

![6](images/2022-06-01-14-54-31.png)  

## 7 string字符存取

![7](images/2022-06-01-14-56-23.png)  
![8](images/2022-06-01-14-57-37.png)  

两种方式 ***可读可写***

## 8 string插入和删除

![9](images/2022-06-01-14-59-03.png)  
从哪个位置起，插入、删除。。。

## 9 string子串

![10](images/2022-06-01-15-02-13.png)  
