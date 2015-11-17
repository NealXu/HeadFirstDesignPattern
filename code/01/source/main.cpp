#include <iostream>
#include "duck.h"

using namespace std;

int main()
{
    Duck *pDuck = new MallardDuck();

    pDuck->Display();
    pDuck->PerformFly();
    pDuck->PerformQuack();

    delete pDuck;

    return 0;
}

/* end of main.c */
