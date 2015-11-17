#include <iostream>
#include "fly_behavior.h"

using namespace std;

FlyWithWings::FlyWithWings()
{}

FlyWithWings::~FlyWithWings()
{}

void FlyWithWings::Fly()
{
    cout << "I'm flying" << endl;
}

FlyNoWay::FlyNoWay()
{}

FlyNoWay::~FlyNoWay()
{}


void FlyNoWay::Fly()
{
    cout << "I can't fly" << endl;
}



/* end of fly_implements.cpp */
