#ifndef _PIZZA_INGREDIENT_FATORY_H_
#define _PIZZA_INGREDIENT_FATORY_H_

#include <vector>
#include "dough.h"
#include "sauce.h"
#include "cheese.h"
#include "veggies.h"
#include "pepperoni.h"
#include "clams.h"

using std::vector;



class PizzaIngredientFactory
{
public:
    virtual Dough* CreateDough() = 0;
    virtual Sauce* CreateSauce() = 0;
    virtual Cheese* CreateCheese() = 0;
    virtual vector<Veggies*>* CreateVeggies() = 0;
    virtual Pepperoni* CreatePepperoni() = 0;
    virtual Clams* CreateClams() = 0;
};

#endif

/* end of pizza_ingredient_factory.h */

