#ifndef _WAITRESS_H_
#define _WAITRESS_H_

#include "diner_menu.h"
#include "pancake_house_menu.h"
#include "cafe_menu.h"

class Waitress
{
public:
    Waitress()
    :menus(NULL)
    {
        menus = new vector<Menu *>();
        if (NULL == menus)
        {
            cout << "Lack of memory." << endl;
            return;
        }

        AddDefaultMenus();
    }

    ~Waitress()
    {
        vector<Menu *>::iterator mIt;
        if (NULL == menus)
        {
            return;
        }

        for (mIt = menus->begin(); mIt != menus->end(); ++mIt)
        {
            if (NULL != *mIt)
            {
                delete *mIt;
                *mIt = NULL;
            }
        }

        delete menus;
    }
    
    void AddMenu(Menu *m)
    {
        menus->push_back(m);
    }
    void PrintMenu()
    {
        vector<Menu *>::iterator mIt;

        cout << "MEMU" << endl << "----" << endl;
        for (mIt = menus->begin(); mIt != menus->end(); ++mIt)
        {
            if (NULL != *mIt)
            {
                Iterator *it = (*mIt)->CreateIterator();
                PrintMenu(it);
                (*mIt)->DestroyIterator(it);
            }
            cout << endl;
        }
    }
private:
    void AddDefaultMenus()
    {
        Menu *pMenu = new PancakeHouseMenu();
        AddMenu(pMenu);
        Menu *dMenu = new DinerMenu();
        AddMenu(dMenu);
        Menu *cMenu = new CafeMenu();
        AddMenu(cMenu);
    }
#if 0
public:

    void PrintMenu()
    {
        Iterator *dIter = dinerMenu.CreateIterator();
        Iterator *pIter = pchMenu.CreateIterator();
        Iterator *cIter = cafeMenu.CreateIterator();

        cout << "MEMU" << endl << "----" << endl << "BREAKFAST" << endl;
        PrintMenu(pIter);

        cout << endl << "LUNCH" << endl;
        PrintMenu(dIter);

        cout << endl << "DINER" << endl;
        PrintMenu(cIter);

        dinerMenu.DestroyIterator(dIter);
        pchMenu.DestroyIterator(pIter);
        cafeMenu.DestroyIterator(cIter);
        
    }
#endif
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
#if 0
private:
    DinerMenu dinerMenu;
    PancakeHouseMenu pchMenu;
    CafeMenu cafeMenu;
#endif
private:
    vector<Menu *> *menus;
};

#endif
/* end of waitress.h */