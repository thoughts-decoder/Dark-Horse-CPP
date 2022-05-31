//多态案例2：制作饮品

#include<iostream>
using namespace std;

class AbstractDrinking
{
    public:
    //煮水
    virtual void Boil() = 0;

    //冲泡
    virtual void Brew() = 0;

    //倒入杯中
    virtual void PourInCup() = 0;

    //加入辅料
    virtual void PutSomething() = 0;

    //制作饮品
    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();

    }
};

//制作咖啡
class Coffee: public AbstractDrinking
{
private:
    /* data */
public:
    Coffee(/* args */);
    ~Coffee();

    //煮水
    virtual void Boil()
    {
        cout << "煮水" << endl;
    }

    //冲泡
    virtual void Brew()
    {
        cout << "冲泡咖啡" << endl;

    }

    //倒入杯中
    virtual void PourInCup()
    {
        cout << "倒入杯中" << endl;

    }

    //加入辅料
    virtual void PutSomething()
    {
        cout << "加点糖、牛奶" << endl;

    }

};

//制作茶水
class Tea: public AbstractDrinking
{
private:
    /* data */
public:
    Tea(/* args */) {}
    ~Tea() {}

    //煮水
    virtual void Boil()
    {
        cout << "煮水" << endl;
    }

    //冲泡
    virtual void Brew()
    {
        cout << "冲泡茶水" << endl;

    }

    //倒入杯中
    virtual void PourInCup()
    {
        cout << "倒入杯中" << endl;

    }

    //加入辅料
    virtual void PutSomething()
    {
        cout << "加点茶叶" << endl;

    }

};

Coffee::Coffee(/* args */)
{
}

Coffee::~Coffee()
{
}

void dowork(AbstractDrinking *abc)
{
    abc->makeDrink();
    //堆区数据手动开辟手动释放
    delete abc;
}

void test1()
{
    dowork(new Coffee);

}
void test2()
{
    dowork(new Tea);
}
int main()
{
    test1();
    test2();

    return 0;
}