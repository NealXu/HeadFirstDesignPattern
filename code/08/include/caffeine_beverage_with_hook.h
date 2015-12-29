#ifndef _CAFFEINE_BEVERAGE_WITH_HOOK_H_
#define _CAFFEINE_BEVERAGE_WITH_HOOK_H_

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class CaffeineBeverageWithHook
{
public:
/*
    CaffeineBeverageWithHook() 
    {}
    virtual ~CaffeineBeverageWithHook()
    {}
*/
    void PrepareRecipe()
    {
        BoilWater();
        Brew();
        PourInCup();
        if (CustomerWantsCondiments())
        {
            AddCondiments();
        }
    }

    virtual void Brew() = 0;
    virtual void AddCondiments() = 0;

    void BoilWater()
    {
        cout << "Boiling water" << endl;
    }

    void PourInCup()
    {
        cout << "Pouring into cup" << endl;
    }

    virtual bool CustomerWantsCondiments()
    {
        return true;
    }
};

#endif
/* end of caffine_beverage_with_hook.h */