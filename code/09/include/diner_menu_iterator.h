#ifndef _DINER_MENU_ITERATOR_H_
#define _DINER_MENU_ITERATOR_H_

#include "menu_item.h"
#include "iterator.h"

class DinerMenuIterator : public Iterator
{
public:
    DinerMenuIterator(MenuItem* menu, int num)
    : menuItes(menu), numOfItems(num), position(-1)
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

        position += 1;
        return (void *)(menuItes + position);
        
    }
private:
    MenuItem* menuItes;
    int numOfItems;
    int position;
};

#endif
/* end of diner_menu_iterator.h */