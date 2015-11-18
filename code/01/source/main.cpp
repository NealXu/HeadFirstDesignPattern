#include <iostream>
#include "duck.h"

using namespace std;

int main()
{
    Duck *pMallard = new MallardDuck();
    Duck *pModelDuck = new ModelDuck();

    pMallard->Display();
    pMallard->PerformFly();
    pMallard->PerformQuack();

    pModelDuck->Display();
    pModelDuck->PerformFly();
    pModelDuck->PerformQuack();
    pModelDuck->SetFlyBehavior(new FlyRocketPowered());
    pModelDuck->PerformFly();

    delete pMallard;
    delete pModelDuck;

    return 0;
}

/* end of main.c */
