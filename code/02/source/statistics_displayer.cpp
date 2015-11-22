#include <iostream>
#include "statistics_displayer.h"

using std::cout;
using std::endl;

StatisticsDisplayer::StatisticsDisplayer(ISubject *pSub)
{
    pSubject = pSub;
    pSubject->RegisterObserver(this);
    maxTemp = -3000;
    minTemp = 3000;
    avgTemp = 0;
    num = 0;
}

StatisticsDisplayer::~StatisticsDisplayer()
{
    pSubject->RemoveObserver(this);
}

void StatisticsDisplayer::Update(float temp, float humidity, float pressure)
{
    float sum = 0;
    
    if (temp > maxTemp)
    {
        maxTemp = temp;
    }

    if (temp < minTemp)
    {
        minTemp = temp;
    }

    sum = avgTemp * num + temp;
    ++num;
    avgTemp = sum/num;

    Display();
}

void StatisticsDisplayer::Display()
{
    cout << "Avg/Max/Min temperature = " << avgTemp << "/" << maxTemp << "/"
         << minTemp << endl;
}



