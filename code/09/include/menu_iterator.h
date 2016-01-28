#ifndef _MENU_ITERATOR_H_
#define _MENU_ITERATOR_H_

#include <vector>
#include "menu_component.h"
#include "iterator.h"

using std::vector;

class MenuIterator : public Iterator
{
public:
    MenuIterator(vector<MenuComponent *> *menu)
    : menuItems(menu), position(-1)
    {

    }

    virtual bool HasNext()
    {
        if (NULL == menuItems)
        {
            return false;
        }
        
        return (position + 1) >= menuItems->size() ? false : true;
    }

    virtual void *Next()
    {
        if (!HasNext())
        {
            return NULL;
        }

        if (NULL == menuItems)
        {
            return NULL;
        }

        position += 1;
        return (void *)(*menuItems)[position];
        
    }
private:
    vector<MenuComponent *> * menuItems;
    int position;
};

#endif
/* end of menu_iterator.h */