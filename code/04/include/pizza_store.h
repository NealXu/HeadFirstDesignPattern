#ifndef _PIZZA_STORE_H_
#define _PIZZA_STORE_H_

#include <string>
#include "pizza.h"

using std::string;

class PizzaStore
{
public:
    PizzaStore() {}
    ~PizzaStore() {}

    Pizza* OrderPizza(string &type)
    {
        Pizza *pPizza = CreatePizza(type);

        pPizza->Prepare();
        pPizza->Bake();
        pPizza->Cut();
        pPizza->Box();

        return pPizza;
    }

    virtual Pizza* CreatePizza(string &type) = 0;
};

#endif
/* end of pizza_store.h */