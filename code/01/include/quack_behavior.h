#ifndef _QUACK_BEHAVIOR_H_
#define _QUACK_BEHAVIOR_H_

class IQuackBehavior
{
public:
    IQuackBehavior() 
    {

    }
    virtual ~IQuackBehavior()
    {

    }

    virtual void Quack() = 0;
};


class NormalQuack : public IQuackBehavior
{
public:
    NormalQuack();
    ~NormalQuack();

    virtual void Quack();
    
};


class MuteQuack : public IQuackBehavior
{
public:
    MuteQuack();
    ~MuteQuack();

    virtual void Quack();
    
};

class Squeak : public IQuackBehavior
{
public:
    Squeak();
    ~Squeak();

    virtual void Quack();
    
};


#endif
/* end of quack_behavior.h */
