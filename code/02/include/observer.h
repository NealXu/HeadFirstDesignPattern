#ifndef _OBSERVER_H_
#define _OBSERVER_H_

class IObserver
{
public:
    IObserver() {}
    virtual ~IObserver() {}

    virtual void Update(float temp, float humidity, float pressure) = 0;

};

#endif
/* end of observer.h */

