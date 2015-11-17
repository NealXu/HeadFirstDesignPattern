#include <iostream>
#include "duck.h"

using namespace std;

int main()
{
    Duck *pDuck1 = new MallardDuck();
    Duck *pDuck2 = new ModelDuck();

    pDuck1->Display();
    pDuck1->PerformFly();
    pDuck1->PerformQuack();

    pDuck2->Display();
    pDuck2->PerformFly();
    pDuck2->PerformQuack();
    pDuck2->SetFlyBehavior(new FlyRocketPowered());
    pDuck2->PerformFly();

    delete pDuck1;
    delete pDuck2;

    return 0;
}

/* end of main.c */
