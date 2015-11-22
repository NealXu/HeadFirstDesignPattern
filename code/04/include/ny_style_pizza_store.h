#ifndef _NY_STYLE_PIZZA_STORE_H_
#define _NY_STYLE_PIZZA_STORE_H_


#include "pizza_store.h"


class NYStylePizzaStore : public PizzaStore
{
public:
    NYStylePizzaStore() {}
    ~NYStylePizzaStore() {}

    virtual Pizza* CreatePizza(string &type);

};

#endif
/* end of ny_style_pizza_store.h */
