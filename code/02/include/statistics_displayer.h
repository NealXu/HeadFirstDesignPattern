#ifndef _STATISTICS_DISPLAYER_H_
#define _STATISTICS_DISPLAYER_H_

#include "display.h"
#include "observer.h"
#include "subject.h"

class StatisticsDisplayer : public IDisplay, public IObserver
{
public:
    StatisticsDisplayer(ISubject *pSub);
    ~StatisticsDisplayer();

    virtual void Update(float temp, float humidity, float pressure);
    virtual void Display();

private:
    float maxTemp;
    float minTemp;
    float avgTemp;
    int num;
    ISubject *pSubject;
};

#endif
/* end of current_condi_displayer.h */

