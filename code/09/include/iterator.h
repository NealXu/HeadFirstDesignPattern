#ifndef _ITERATOR_H_
#define _ITERATOR_H_

class Iterator
{
public:
    virtual bool HasNext() = 0;
    virtual void *Next() = 0;
};

#endif
/* end of iterator.h */
