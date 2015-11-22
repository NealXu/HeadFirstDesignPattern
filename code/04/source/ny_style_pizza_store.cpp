#include "ny_style_cheese_pizza.h"
#include "ny_style_pizza_store.h"

Pizza* NYStylePizzaStore::CreatePizza(string &type)
{
    string cheese("cheese");
    string pepperoni("pepperoni");
    string clam("clam");
    string veggie("veggie");

    if (cheese == type)
    {
        return new NYStyleCheesePizza();
    }
    else if (pepperoni == type)
    {}
    else if (clam == type)
    {}
    else if (veggie == type)
    {}
}

/* end of ny_style_pizza_store.cpp */
