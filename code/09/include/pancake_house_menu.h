#ifndef _PANCAKE_HOUSE_MENU_H_
#define _PANCAKE_HOUSE_MENU_H_

#include <iostream>
#include <vector>
//#include "menu_item.h"
#include "menu_component.h"
#include "pancake_house_menu_iterator.h"
#include "menu.h"

using std::cout;
using std::endl;
using std::vector;

class PancakeHouseMenu :  public MenuComponent, public Menu
{
public:
    PancakeHouseMenu(string n, string d)
    : name(n), description(d), menuItems(NULL)
    {
        menuItems = new vector<MenuComponent *>();
        if (NULL == menuItems)
        {
            cout << "Not enough memory for menu items." << endl;
            return;
        }

        AddDefaultItems();
    }
    virtual ~PancakeHouseMenu()
    {
        vector<MenuComponent *>::iterator it;
        if (NULL == menuItems)
        {
            return;
        }
        for (it = menuItems->begin(); it != menuItems->end(); it++)
        {
            if (NULL != *it)
            {
                delete *it;
            }
        }
        delete menuItems;

    }

    virtual Iterator * CreateIterator()
    {
        return new PancakeHouseIterator(menuItems);
    }

    virtual void DestroyIterator(Iterator *it)
    {
        if (NULL != it)
        {
            delete it;
        }
    }

    virtual void Add(MenuComponent *mc)
    {
        if (NULL == mc)
        {
            return;
        }

        menuItems->push_back(mc);
    }

    virtual void Delete(MenuComponent *mc)
    {
        vector<MenuComponent *>::iterator it;
        if (NULL == mc)
        {
            return;
        }
        for (it = menuItems->begin(); it != menuItems->end(); it++)
        {
            if (mc == *it)
            {
                delete *it;
                *it = NULL;
            }
        }
    }

    virtual MenuComponent *GetChild(int i)
    {
        if (i >= menuItems->size())
        {
            return NULL;
        }

        return (*menuItems)[i];
    }

    virtual string &GetName()
    {
        return name;
    }

    virtual string &GetDescription()
    {
        return description;
    }

    virtual void Print()
    {
        cout << endl << GetName() << ", " << GetDescription() << endl;
        cout << "---------------------------------------" << endl;

        Iterator * it = CreateIterator();
        while (it->HasNext())
        {
            MenuComponent * mc = (MenuComponent *)it->Next();
            mc->Print();
        }
    }
    
    void AddItem(string name, string desc, bool vege, double pric)
    {
        MenuComponent * mc = (MenuComponent *)new MenuItem(name, desc, vege, pric);
        menuItems->push_back(mc);
    }

    /*
    vector<MenuItem> * GetMenuItems()
    {
        return menuItems;
    }
    */

    
    
private:
    void AddDefaultItems()
    {
        AddItem("K&B's Pancake Breakfast", 
                "Pancakes with scrambled eggs, and toast", 
                true, 
                2.99);
        AddItem("Regular Pancake Breakfast", 
                "Pancakes with fried eggs, sausage", 
                false, 
                2.99);
        AddItem("Blueberry Pancake", 
                "Pancakes made with fresh blueberries", 
                false, 
                3.49);
        AddItem("Waffles", 
                "Waffles, with your choice of blueberries or strawberries", 
                true, 
                3.59);
    }
private:
    //vector<MenuItem> * menuItems;
    string name;
    string description;
    vector<MenuComponent *> *menuItems;
};

#endif
/* end of pancake_house_menu.h */