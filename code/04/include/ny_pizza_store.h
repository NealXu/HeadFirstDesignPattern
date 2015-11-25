#ifndef _NY_PIZZA_STORE_H_
#define _NY_PIZZA_STORE_H_

#include <string>

#include "ny_pizza_ingredient_factory.h"
#include "pizza_store.h"
#include "cheese_pizza.h"
#include "clams_pizza.h"

using::string;

class NYPizzaStore : public PizzaStore
{
public:
    virtual Pizza* CreatePizza(T_PIZZA_TYPE type)
    {
        Pizza *pizza = NULL;

        if (CHEESE == type)
        {
            pizza = new CheesePizza(&nyIngredientFact);
            string name("New York Style Cheese Pizza");
            pizza->SetName(name);
        }
        else if (PEPPERONI == type)
        {
        }
        else if (CLAMS == type)
        {
            pizza = new ClamsPizza(&nyIngredientFact);
            string name("New York Style clams Pizza");
            pizza->SetName(name);
        }
        else if (VEGGIES == type)
        {
        } 

        return pizza;
    }
private:
    NYPizzaIngredientFactory nyIngredientFact;
};

#endif
/* end of ny_pizza_store.h */