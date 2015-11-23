#include "chicago_style_cheese_pizza.h"
#include "chicago_style_pizza_store.h"

Pizza* ChicagoStylePizzaStore::CreatePizza(string &type)
{
    string cheese("cheese");
    string pepperoni("pepperoni");
    string clam("clam");
    string veggie("veggie");

    if (cheese == type)
    {
        return new ChicagoStyleCheesePizza();
    }
    else if (pepperoni == type)
    {}
    else if (clam == type)
    {}
    else if (veggie == type)
    {}
}

/* end of chicago_style_pizza_store.cpp */

