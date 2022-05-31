//多态案例1：计算器类

//普通方法
#include<iostream>
#include<string>
using namespace std;

class Calculator
{
private:
    /* data */

public:
    Calculator(/* args */);
    ~Calculator();
    int getResult(string oper)
    {
        if(oper == "+")
            return m_Num1 + m_Num2;
        else if (oper == "-")
            return m_Num1 - m_Num2;
        else if (oper == "*")
            return m_Num1 * m_Num2;

    }
    //想要扩展新功能，需要修改源码
    //真正开发中，提倡开闭原则
    //开闭原则：对扩展进行开发，对修改进行关闭


    int m_Num1;
    int m_Num2;
};

Calculator::Calculator(/* args */)
{
}

Calculator::~Calculator()
{
}

void test1()
{
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;
    cout << c.m_Num1 << "+" << c.m_Num2 << "=" <<c.getResult("+") << endl;
    cout << c.m_Num1 << "-" << c.m_Num2 << "=" <<c.getResult("-") << endl;
    cout << c.m_Num1 << "*" << c.m_Num2 << "=" <<c.getResult("*") << endl;
}
//多态方法
/*
多态好处
1.组织结构清晰，不同方法在不同地方。
2.可读性强
3.对于前期和后期扩展以及维护性高
*/
//实现计算器抽象类
class AbstractCalculator
{
private:
    /* data */
public:
    AbstractCalculator(/* args */);
    ~AbstractCalculator();
    virtual int getResult()
    {
        return 0;
    }
    int m_Num1;
    int m_Num2;

};
//加法计算器类
class AddCalculator : public AbstractCalculator
{
    public:
    int getResult()
    {
        return m_Num1 + m_Num2;
    }
};
//减法计算法
class SubCalculator : public AbstractCalculator
{
    public:
    int getResult()
    {
        return m_Num1 - m_Num2;
    }
};
//乘法计算器
class MulCalculator : public AbstractCalculator
{
    public:
    int getResult()
    {
        return m_Num1 * m_Num2;
    }
};

AbstractCalculator::AbstractCalculator(/* args */)
{
}

AbstractCalculator::~AbstractCalculator()
{
}

void test2()
{
    //多态使用条件
    //父类指针或者引用指向子类对象

    AbstractCalculator *abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult()<< endl;
    //用完记得销毁
    delete abc;

    //减法运算
    abc = new SubCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult()<< endl;
    //用完记得销毁
    delete abc;

    //乘法
    abc = new SubCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult()<< endl;
    //用完记得销毁
    delete abc;
}
int main()
{
    test1();
    return 0;
}

