#ifndef _MENU_H_
#define _MENU_H_

#include <iostream>
#include <vector>
#include <string>
#include "menu_iterator.h"
#include "menu_component.h"

using std::cout;
using std::endl;
using std::vector;
using std::string;

class Menu : public MenuComponent
{
public:
	Menu(string n, string d)
	:name(n), description(d), menuItems(NULL)
	{
		menuItems = new vector<MenuComponent *>();
        if (NULL == menuItems)
        {
            cout << "Not enough memory for menu items." << endl;
            return;
        }
	}
	virtual ~Menu()
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

    Iterator *CreateIterator()
    {
    	return new MenuIterator(menuItems);
    }

    void DestroyIterator(Iterator *it)
    {
    	if (NULL == it)
        {
            return;
        }
        
        delete it;
    }

    virtual void Add(MenuComponent *item)
    {
        if (NULL == item)
        {
            return;
        }

        menuItems->push_back(item);
    }

    virtual void Delete(MenuComponent *item)
    {
        vector<MenuComponent *>::iterator it;

        if (NULL == item)
        {
            return;
        }

        for (it = menuItems->begin(); it != menuItems->end(); it++)
        {
            if (item == *it)
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

        Iterator *it = CreateIterator();
        while (it->HasNext())
        {
            MenuComponent *item = (MenuComponent *)it->Next();
            item->Print();
        }
        DestroyIterator(it);
    }
private:
	string name;
	string description;
	vector<MenuComponent *> *menuItems;
};

#endif
/* end of menu.h */