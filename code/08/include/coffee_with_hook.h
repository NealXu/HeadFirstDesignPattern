#ifndef _COFFEE_WITH_HOOK_H_
#define _COFFEE_WITH_HOOK_H_

#include <exception>
#include <ctype.h>
#include "caffeine_beverage_with_hook.h"


class CoffeeWithHook : public CaffeineBeverageWithHook
{
public:
    virtual void Brew()
    {
        cout << "Dripping Coffee through filter" << endl;
    }
    virtual void AddCondiments()
    {
        cout << "Adding Sugar and Milk" << endl;
    }

    virtual bool CustomerWantsCondiments()
    {
        int answer = 0;
        
        answer = GetUserInput();
        return (bool)(0 != answer);
    }

    int GetUserInput()
    {
        char c = 0;
        cout << "Would you like mile and sugar with your coffee (y/n)?";
        try 
        {
            cin >> c;
            if (!isalpha(c))
            {
                throw "invalid input";
            }
            if (!islower(c))
            {
                c = (char)tolower(c);
            }
            
            if ('y' != c && 'n' != c)
            {
                throw "invalid input";
            }
        }
        catch (char const* str)
        {
            cout << str << endl;
        }

        return ('y' == c) ? 1 : 0;
    }
};

#endif
/* end of coffee_with_hook.h */
