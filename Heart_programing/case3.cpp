//电脑组装
/*
各零件定义为抽象基类，由不同的厂商生产各种零件
组装各种零件，定义电脑类使其工作
*/
#include <iostream>
using namespace std;
class CPU
{
private:
    /* data */
public:
    CPU(/* args */);
    ~CPU();
    virtual void calculate() = 0;
};

CPU::CPU(/* args */)
{
}

CPU::~CPU()
{
}

class XianKa
{
private:
    /* data */
public:
    XianKa(/* args */);
    virtual void display() = 0;
    ~XianKa();
};

XianKa::XianKa(/* args */)
{
}

XianKa::~XianKa()
{
}

class Memory
{
private:
    /* data */
public:
    Memory(/* args */);
    ~Memory();
    virtual void storage() = 0;

};

Memory::Memory(/* args */)
{
}

Memory::~Memory()
{
}

class IntelCPU : public CPU
{
    virtual void calculate()
    {
        cout << "intel cpu is calculate\n";

    }

};
class IntelMemory : public Memory
{
    virtual void storage()
    {
        cout << "intel memory is storage\n";
        
    }

};
class IntelXianka : public XianKa
{
    virtual void display()
    {
        cout << "intel Xianka is display\n";
        
    }

};
class LenovoCPU : public CPU
{
    virtual void calculate()
    {
        cout << "Lenovo cpu is calculate\n";

    }

};
class LenovoMemory : public Memory
{
    virtual void storage()
    {
        cout << "Lenovo memory is storage\n";
        
    }

};
class LenovoXianka : public XianKa
{
    virtual void display()
    {
        cout << "Lenovo Xianka is display\n";
        
    }

};

class computer
{
public:
    computer(CPU * cpup, XianKa * xianp, Memory * mep)
    {
        c_cpup = cpup;
        c_xianp = xianp;
        c_mep = mep;

    }
    ~computer()
    {
        if(c_cpup != NULL)
        {
            delete c_cpup;
            c_cpup = NULL;
        }
        if(c_xianp != NULL)
        {
            delete c_xianp;
            c_xianp = NULL;
        }
        if(c_mep != NULL)
        {
            delete c_mep;
            c_mep = NULL;
        }
    }

    //提供工作的函数
    void work()
    {
        c_cpup->calculate();
        c_xianp->display();
        c_mep->storage();

    }
    CPU * c_cpup;
    XianKa * c_xianp;
    Memory * c_mep;
};

void test1()
{
    CPU *c = new IntelCPU;
    XianKa * x = new IntelXianka;
    Memory * m = new IntelMemory;

    computer *cc = new computer(c, x, m);
    cc->work();
    // delete c;
    // delete x; 
    // delete m;

    //在computer 析构函数中释放

    delete cc;
}
void test2()
{
    CPU *c = new IntelCPU;
    XianKa * x = new IntelXianka;
    Memory * m = new LenovoMemory;

    computer *cc = new computer(c, x, m);
    cc->work();
    // delete c;
    // delete x;
    // delete m;

    delete cc;

}
int main()
{
    test1();
    test2();
    return 0;
}