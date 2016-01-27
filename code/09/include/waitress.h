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
        menus = new vector<MenuComponent *>();
        if (NULL == menus)
        {
            cout << "Lack of memory." << endl;
            return;
        }

        AddDefaultMenus();
    }

    ~Waitress()
    {
        vector<MenuComponent *>::iterator mIt;
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
    
    void AddMenu(MenuComponent *m)
    {
        menus->push_back(m);
    }
    void PrintMenu()
    {
        vector<MenuComponent *>::iterator mIt;

        cout << "MEMU" << endl << "----" << endl;
        for (mIt = menus->begin(); mIt != menus->end(); ++mIt)
        {
            if (NULL != *mIt)
            {
                /*Iterator *it = (*mIt)->CreateIterator();
                PrintMenu(it);
                (*mIt)->DestroyIterator(it);*/
                (*mIt)->Print();
            }
            cout << endl;
        }
    }
private:
    void AddDefaultMenus()
    {
        MenuComponent *pMenu = new PancakeHouseMenu("PANCAKE HOUSE MENU", "Breakfast");
        AddMenu(pMenu);
        /*MenuComponent *dMenu = new DinerMenu();
        AddMenu(dMenu);
        MenuComponent *cMenu = new CafeMenu();
        AddMenu(cMenu);*/
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
            item->Print();
        }
    }
#if 0
private:
    DinerMenu dinerMenu;
    PancakeHouseMenu pchMenu;
    CafeMenu cafeMenu;
#endif
private:
    vector<MenuComponent *> *menus;
};

#endif
/* end of waitress.h */