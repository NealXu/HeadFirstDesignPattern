#ifndef _PANCAKE_HOUSE_MENU_H_
#define _PANCAKE_HOUSE_MENU_H_

#include <iostream>
#include <vector>
#include "menu_item.h"

using std::cout;
using std::endl;
using std::vector;

class PancakeHouseMenu
{
public:
    PancakeHouseMenu()
    : menuItems(NULL)
    {
        menuItems = new vector<MenuItem>();
        if (NULL == menuItems)
        {
            cout << "Not enough memory for menu items" << endl;
            return;
        }
    }
    ~PancakeHouseMenu()
    {
        if (NULL != menuItems)
        {
            delete menuItems;
            menuItems = NULL;
        }
    }
    void AddItem(string name, string desc, bool vege, double pric)
    {
        menuItems->push_back(MenuItem(name, desc, vege, pric))
    }
    vector<MenuItem> * GetMenuItems()
    {
        return menuItems;
    }
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
    vector<MenuItem> * menuItems;
};

#endif
/* end of pancake_house_menu.h */