#ifndef _WAITRESS_H_
#define _WAITRESS_H_

#include "menu_component.h"

class Waitress
{
public:
    Waitress(MenuComponent *m)
    :menu(m)
    {
    }
    
    void PrintMenu()
    {
        if (NULL == menu)
        {
            cout << "There is not a menu." << endl;
            return;
        }
        menu->Print();
    }
private:
    
private:
    MenuComponent *menu;
};

#endif
/* end of waitress.h */