#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include "observer.h"


class ISubject
{
public:
    ISubject() {}
    virtual ~ISubject() {}

    virtual void RegisterObserver(IObserver *pOb) = 0;
    virtual void RemoveObserver(IObserver *pOb) = 0;
    virtual void NotifyObservers() = 0;
    virtual void SetChanged() = 0;
    virtual void ClearChanged() = 0;
    virtual bool HasChanged() = 0;
};

#endif

/* end of subject.h */