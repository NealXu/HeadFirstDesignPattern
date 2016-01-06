#ifndef _CAFE_MENU_H_
#define _CAFE_MENU_H_

#include <iostream>
#include <list>
#include "menu_item.h"
#include "cafe_menu_iterator.h"
#include "menu.h"

using std::cout;
using std::endl;
using std::list;

class CafeMenu : public Menu
{
public:
    CafeMenu()
    : menuItems(NULL)
    {
        menuItems = new list<MenuItem>();
        if (NULL == menuItems)
        {
            cout << "System was short of memory." << endl;
            return;
        }

        AddDefaultItems();
    }
    ~CafeMenu()
    {
        if (NULL != menuItems)
        {
            delete menuItems;
            menuItems = NULL;
        }
    }

    void AddItem(string name, string desc, bool vege, double pric)
    {
        menuItems->push_back(MenuItem(name, desc, vege, pric));
    }

    virtual Iterator * CreateIterator()
    {
        return new CafeMenuIterator(menuItems);
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
        AddItem("Veggie Burger and Air Fries", 
                "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", 
                true, 
                3.99);
        AddItem("Soup of the day", 
                "A cup of the soup of the day, with a side salad", 
                false, 
                3.69);
        AddItem("Burrito", 
                "A large burrito, with whole pinto beans, salsa, guacamole", 
                true, 
                4.29);
    }
private:
    list<MenuItem> *menuItems;
    
};


#endif
/* end of cafe_menu.h */

