#ifndef _CHICAGO_STYLE_PIZZA_STORE_H_
#define _CHICAGO_STYLE_PIZZA_STORE_H_


#include "pizza_store.h"


class ChicagoStylePizzaStore : public PizzaStore
{
public:
    ChicagoStylePizzaStore() {}
    ~ChicagoStylePizzaStore() {}

    virtual Pizza* CreatePizza(string &type);

};

#endif
/* end of ny_style_pizza_store.h */

