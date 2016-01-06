#ifndef _CAFE_MENU_ITERATOR_H_
#define _CAFE_MENU_ITERATOR_H_

#include <list>
#include "menu_item.h"
#include "iterator.h"

using std::list;


class CafeMenuIterator : public Iterator
{
public:
    CafeMenuIterator(list<MenuItem> *menu)
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
        list<MenuItem>::iterator it;
        int i = 0;
        
        if (!HasNext())
        {
            return NULL;
        }

        if (NULL == menuItes)
        {
            return NULL;
        }

        position += 1;
        for (it = menuItes->begin(); it != menuItes->end(); ++it, ++i)
        {
            if (i == position)
            {
                return (void *)&(*it);
            }
        }

        return NULL;
    }
private:
    list<MenuItem> * menuItes;
    int position;
};

#endif
/* end of cafe_menu_iterator.h */
