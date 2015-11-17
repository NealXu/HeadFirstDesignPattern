#include <iostream>
#include "quack_behavior.h"

using namespace std;

NormalQuack::NormalQuack()
{}

NormalQuack::~NormalQuack()
{}

void NormalQuack::Quack()
{
    cout << "normal quack" << endl;
}

MuteQuack::MuteQuack()
{}

MuteQuack::~MuteQuack()
{}

void MuteQuack::Quack()
{
    cout << "silence" << endl;
}


Squeak::Squeak()
{}

Squeak::~Squeak()
{}


void Squeak::Quack()
{
    cout << "squeak" << endl;
}



/* end of quack_implements.cpp */
