#ifndef _PANCAKE_HOUSE_MENU_ITERATOR_H_
#define _PANCAKE_HOUSE_MENU_ITERATOR_H_

#include <vector>
//#include "menu_item.h"
#include "menu_component.h"
#include "iterator.h"

using std::vector;

class PancakeHouseIterator : public Iterator
{
public:
    PancakeHouseIterator(vector<MenuComponent *> *menu)
    : menuItes(menu), position(-1)
    {

    }

    virtual bool HasNext()
    {
        if (NULL == menuItes)
        {
            return false;
        }
        
        return (position + 1) >= menuItes->size() ? false : true;
    }

    virtual void *Next()
    {
        if (!HasNext())
        {
            return NULL;
        }

        if (NULL == menuItes)
        {
            return NULL;
        }

        position += 1;
        return (void *)(*menuItes)[position];
        
    }
private:
    vector<MenuComponent *> * menuItes;
    int position;
};

#endif
/* end of pancake_house_menu_iterator.h */

