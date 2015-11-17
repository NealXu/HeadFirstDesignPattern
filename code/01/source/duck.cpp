#include <iostream>
#include "duck.h"

using namespace std;

void Duck::PerformQuack()
{
    if (NULL != pQuackBh)
    {
        pQuackBh->Quack();
    }

}

void Duck::Swim()
{
    cout << "all duck float, even decoys!" << endl;
}


void Duck::PerformFly()
{
    if (NULL != pFlyBh)
    {
        pFlyBh->Fly();
    }
}


MallardDuck::MallardDuck()
{
    pFlyBh = new FlyWithWings();
    pQuackBh = new NormalQuack();
}

MallardDuck::~MallardDuck()
{
    if (NULL != pFlyBh)
    {
        delete pFlyBh;
    }

    if (NULL != pQuackBh)
    {
        delete pQuackBh;
    }
}

void MallardDuck::Display()
{
    cout << "display a MallardDuck" << endl;
}

/* end of duck.cpp */
