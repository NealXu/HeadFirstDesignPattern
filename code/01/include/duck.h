#ifndef _DUCK_H_
#define _DUCK_H_


#include "fly_behavior.h"
#include "quack_behavior.h"


class Duck
{
public:
    Duck(){}
    virtual ~Duck(){}

    void PerformQuack();
    virtual void Swim();
    virtual void Display() = 0;
    void PerformFly();

    IFlyBehavior *pFlyBh;
    IQuackBehavior *pQuackBh;

};

class MallardDuck : public Duck
{
public:

    MallardDuck();
    ~MallardDuck();

    virtual void Display();
};


#endif
/* end of duck.h */
