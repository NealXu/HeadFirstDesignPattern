#include <iostream>
#include "current_condi_displayer.h"

using std::cout;
using std::endl;

CurrentCondiDisplayer::CurrentCondiDisplayer(ISubject *pSub)
{
    pSubject = pSub;
    pSubject->RegisterObserver(this);
}

CurrentCondiDisplayer::~CurrentCondiDisplayer()
{
    pSubject->RemoveObserver(this);
}

void CurrentCondiDisplayer::Update(float temp, float humidity, float pressure)
{
    currTemp = temp;
    currHumi = humidity;

    Display();
}

void CurrentCondiDisplayer::Display()
{
    cout << "Current condition : " << currTemp << " F degrees and " 
         << currHumi << "% humidity" << endl;
}


/* end of current_condi_displayer.cpp */
