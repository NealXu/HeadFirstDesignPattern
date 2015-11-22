#ifndef _CURRENT_CODI_DISPLAYER_H_
#define _CURRENT_CODI_DISPLAYER_H_

#include "display.h"
#include "observer.h"
#include "subject.h"

class CurrentCondiDisplayer : public IDisplay, public IObserver
{
public:
    CurrentCondiDisplayer(ISubject *pSub);
    ~CurrentCondiDisplayer();

    virtual void Update(float temp, float humidity, float pressure);
    virtual void Display();

private:
    float currTemp;
    float currHumi;
    ISubject *pSubject;
};

#endif
/* end of current_condi_displayer.h */
