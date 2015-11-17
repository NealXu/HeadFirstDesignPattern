#ifndef _FLY_BEHAVIOR_H_
#define _FLY_BEHAVIOR_H_

class IFlyBehavior
{
public:
    IFlyBehavior() 
    {

    }
    virtual ~IFlyBehavior()
    {

    }

    virtual void Fly() = 0;
};

class FlyWithWings : public IFlyBehavior
{
public:
    FlyWithWings();
    ~FlyWithWings();

    virtual void Fly();
};


class FlyNoWay : public IFlyBehavior
{
public:

    FlyNoWay();
    ~FlyNoWay();

    virtual void Fly();
    
};


#endif
/* end of fly_behavior.h */
