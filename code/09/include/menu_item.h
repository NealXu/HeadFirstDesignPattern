#ifndef _MENU_ITEM_H_
#define _MENU_ITEM_H_

#include <string>

using std::string;

class MenuItem
{
public:
    MenuItem()
    {}
    MenuItem(string n, string d, bool v, double p)
    : name(n), description(d), vegetarian(v), price(p)
    {
    }

    string &GetName()
    {
        return name;
    }

    string &GetDescription()
    {
        return description;
    }

    bool IsVegetagrian()
    {
        return vegetarian;
    }

    double GetPrice()
    {
        return price;
    }
    
private:
    string name;
    string description;
    bool vegetarian;
    double price;
};

#endif
/* end of menu_item.h */