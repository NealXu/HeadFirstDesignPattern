#ifndef _DINER_MENU_H_
#define _DINER_MENU_H_

#include <iostream>
#include "menu_item.h"
#include "diner_menu_iterator.h"
#include "menu.h"

using std::cout;
using std::endl;

class DinerMenu : public Menu
{
public:
    DinerMenu()
    : numOfItems(0), menuItems(NULL)
    {
        menuItems = new MenuItem[MAX_ITEMS];
        if (NULL == menuItems)
        {
            cout << "failed to allocate memory for menu items." << endl;
            return;
        }

        AddDefaultItems();
    }
    ~DinerMenu()
    {
        if (NULL != menuItems)
        {
            delete [] menuItems;
            menuItems = NULL;
        }
    }

    void AddItem(string name, string desc, bool vege, double pric)
    {
        if (MAX_ITEMS <= numOfItems)
        {
            cout << "Sorry, menu is full! Can't add item to menu." << endl;
            return;
        }

        menuItems[numOfItems] = MenuItem(name, desc, vege, pric);
        ++numOfItems;
    }
/*
    MenuItem *GetMenuItems(int *num)
    {
        if (NULL == num)
        {
            cout << "input parameter(num) is invalid." << endl;
            return NULL;
        }
        *num = numOfItems;
        return menuItems;
    }
*/
    virtual Iterator * CreateIterator()
    {
        return new DinerMenuIterator(menuItems, numOfItems);
    }

    virtual void DestroyIterator(Iterator *it)
    {
        if (NULL != it)
        {
            delete it;
        }
    }
private:
    void AddDefaultItems()
    {
        AddItem("Vegetarian BLT", 
                "(Fakin')Bacon with lettuce & tomato on whole wheat", 
                true, 
                2.99);
        AddItem("BLT", 
                "Bacon with lettuce & tomato on whole wheat", 
                false, 
                2.99);
        AddItem("Soup of the day", 
                "Soup of the day, with a side of potato salad", 
                false, 
                3.99);
        AddItem("Hotdog", 
                "A hot dog, with saurkraut, relish, onions, topped with cheese", 
                true, 
                3.05);
    }
private:
    static int MAX_ITEMS;
    int numOfItems;
    MenuItem *menuItems;
    
};


#endif
/* end of diner_menu.h */