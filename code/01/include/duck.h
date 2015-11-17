#ifndef _DUCK_H_
#define _DUCK_H_


#include "fly_behavior.h"
#include "quack_behavior.h"

/*
**  prototype of Duck
*/
class Duck
{
public:
    Duck(){}
    virtual ~Duck(){}

    void PerformQuack();
    virtual void Swim();
    virtual void Display() = 0;
    void PerformFly();

    void SetFlyBehavior(IFlyBehavior * pFb);
    void SetQuackBehavior(IQuackBehavior *pQb);

    IFlyBehavior *pFlyBh;
    IQuackBehavior *pQuackBh;

};

/*
**  prototype of MallardDuck
*/

class MallardDuck : public Duck
{
public:

    MallardDuck();
    ~MallardDuck();

    virtual void Display();
};

/*
**  prototype of ModelDuck
*/

class ModelDuck : public Duck
{
public:

    ModelDuck();
    ~ModelDuck();

    virtual void Display();
};



#endif
/* end of duck.h */
