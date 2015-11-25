#ifndef _CHICAGO_PIZZA_STORE_H_
#define _CHICAGO_PIZZA_STORE_H_

#include <string>

#include "chicago_pizza_ingredient_factory.h"
#include "pizza_store.h"
#include "cheese_pizza.h"
#include "clams_pizza.h"

using::string;

class ChicagoPizzaStore : public PizzaStore
{
public:
    virtual Pizza* CreatePizza(T_PIZZA_TYPE type)
    {
        Pizza *pizza = NULL;

        if (CHEESE == type)
        {
            pizza = new CheesePizza(&chicagoIngredientFact);
            string name("Chicago Style Cheese Pizza");
            pizza->SetName(name);
        }
        else if (PEPPERONI == type)
        {

        }
        else if (CLAMS == type)
        {
            pizza = new ClamsPizza(&chicagoIngredientFact);
            string name("Chicago Style Clams Pizza");
            pizza->SetName(name);
        }
        else if (VEGGIES == type)
        {

        } 

        return pizza;
    }
    
private:
    ChicagoPizzaIngredientFactory chicagoIngredientFact;
};

#endif
/* end of chicago_pizza_store.h */

