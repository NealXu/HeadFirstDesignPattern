#ifndef _CHICAGO_PIZZA_INGREDIENT_FACTORY_H_
#define _CHICAGO_PIZZA_INGREDIENT_FACTORY_H_

#include "pizza_ingredient_factory.h"
#include "thick_crust_dough.h"
#include "plum_tomato_sauce.h"
#include "mozzarella_cheese.h"
#include "red_pepperoni.h"
#include "garlic.h"
#include "onion.h"
#include "mushroom.h"
#include "frozen_clams.h"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    ChicagoPizzaIngredientFactory() {}
    ~ChicagoPizzaIngredientFactory() {}
    
    virtual Dough* CreateDough()
    {
        return new ThickCrustDough();
    }
    virtual Sauce* CreateSauce()
    {
        return new PlumTomatoSauce();
    }
    virtual Cheese* CreateCheese()
    {
        return new MozzarellaCheese();
    }
    virtual vector<Veggies*>* CreateVeggies()
    {
        vector<Veggies*> *pVec = new vector<Veggies*>();
        Veggies *pGar = new Garlic();
        Veggies *pOni = new Onion();
        Veggies *pMush = new Mushroom();

        pVec->push_back(pGar);
        pVec->push_back(pOni);
        pVec->push_back(pMush);
        
        return pVec;
    }
    virtual Pepperoni* CreatePepperoni()
    {
        return new RedPepperoni();
    }
    virtual Clams* CreateClams()
    {
        return new FrozenClams();
    }
};

#endif
/* end of chicago_pizza_ingredient_factory.h */

