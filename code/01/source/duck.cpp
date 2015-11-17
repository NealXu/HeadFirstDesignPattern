#include <iostream>
#include "duck.h"

using namespace std;

/*
**  implement of Duck
*/

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

void Duck::SetFlyBehavior(IFlyBehavior * pFb)
{
    if (NULL != pFlyBh)
    {
        delete pFlyBh;
    }
    pFlyBh = pFb;
}

void Duck::SetQuackBehavior(IQuackBehavior *pQb)
{
    if (NULL != pQuackBh)
    {
        delete pQuackBh;
    }
    pQuackBh = pQb;
}



/*
**  implement of MallardDuck
*/
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


/*
**  implement of ModelDuck
*/
ModelDuck::ModelDuck()
{
    pFlyBh = new FlyNoWay();
    pQuackBh = new MuteQuack();
}

ModelDuck::~ModelDuck()
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

void ModelDuck::Display()
{
    cout << "display a ModelDuck" << endl;
}


/* end of duck.cpp */
