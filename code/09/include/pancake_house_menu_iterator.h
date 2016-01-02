#ifndef _PANCAKE_HOUSE_MENU_ITERATOR_H_
#define _PANCAKE_HOUSE_MENU_ITERATOR_H_

#include <vector>
#include "menu_item.h"
#include "iterator.h"

using std::vector;

class PancakeHouseIterator : public Iterator
{
public:
    PancakeHouseIterator(vector<MenuItem> *menu)
    : menuItes(menu);
    {
    }

    virtual bool HasNext()
    {
        return (position + 1) >= numOfItems ? false : true;
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

        ++position;
        return (void *)(menuItes + position)
        
    }
private:
    vector<MenuItem> * menuItes;
};

#endif
/* end of pancake_house_menu_iterator.h */

