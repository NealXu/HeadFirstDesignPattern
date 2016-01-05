#ifndef _MENU_H_
#define _MENU_H_

#include "iterator.h"

class Menu 
{
public:
    virtual Iterator *CreateIterator() = 0;
    virtual void DestroyIterator(Iterator *it) = 0;
};

#endif
/* end of menu.h */