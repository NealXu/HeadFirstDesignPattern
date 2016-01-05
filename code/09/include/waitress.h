#ifndef _WAITRESS_H_
#define _WAITRESS_H_

#include "diner_menu.h"
#include "pancake_house_menu.h"

class Waitress
{
public:
    void PrintMenu()
    {
        Iterator *dIter = dinerMenu.CreateIterator();
        Iterator *pIter = pchMenu.CreateIterator();

        cout << "MEMU" << endl << "----" << endl << "BREAKFAST" << endl;
        PrintMenu(pIter);

        cout << endl << "LUNCH" << endl;
        PrintMenu(dIter);

        dinerMenu.DestroyIterator(dIter);
        pchMenu.DestroyIterator(pIter);
        
    }

private:
    void PrintMenu(Iterator * it)
    {
        while (it->HasNext())
        {
            MenuItem *item = (MenuItem *)it->Next();
            cout << item->GetName() << ", " << item->GetPrice() << " -- "
            << item->GetDescription()<< endl;
        }
    }
private:
    DinerMenu dinerMenu;
    PancakeHouseMenu  pchMenu;
    
};

#endif
/* end of waitress.h */