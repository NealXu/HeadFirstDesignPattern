#ifndef _MENU_ITEM_H_
#define _MENU_ITEM_H_

// #include <string>

// using std::string;

#include "menu_component.h"

class MenuItem : public MenuComponent
{
public:
    MenuItem()
    {}
    MenuItem(string n, string d, bool v, double p)
    : name(n), description(d), vegetarian(v), price(p)
    {

    }

    virtual ~MenuItem()
    {
        
    }

    virtual string &GetName()
    {
        return name;
    }

    virtual string &GetDescription()
    {
        return description;
    }

    virtual bool IsVegetagrian()
    {
        return vegetarian;
    }

    virtual double GetPrice()
    {
        return price;
    }
    
    virtual void Print()
    {
        cout << "  " << GetName();

        if (IsVegetagrian())
        {
            cout << "(v)";
        }

        cout << ", " << GetPrice() << " -- " << GetDescription() << endl;
    }
private:
    string name;
    string description;
    bool vegetarian;
    double price;
};

#endif
/* end of menu_item.h */