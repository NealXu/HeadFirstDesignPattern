#ifndef _NY_PIZZA_INGREDIENT_FACTORY_H_
#define _NY_PIZZA_INGREDIENT_FACTORY_H_

#include "thin_crust_dough.h"
#include "marinara_sauce.h"
#include "reggiano_cheese.h"
#include "sliced_pepperoni.h"
#include "garlic.h"
#include "onion.h"
#include "mushroom.h"
#include "fresh_clams.h"

class NYPizzaIngredientFactory : pulic PizzaIngredientFactory
{
public:
    NYPizzaIngredientFactory() {}
    ~NYPizzaIngredientFactory() {}
    
    virtual Dough* CreateDough()
    {
        return new ThinCrustDough();
    }
    virtual Sauce* CreateSauce()
    {
        return new MarinaraSauce();
    }
    virtual Cheese* CreateCheese()
    {
        return new ReggianoCheese();
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
        return new SlicedPepperoni();
    }
    virtual Clams CreateClams()
    {
        return new FreshClams();
    }
};

#endif
/* end of ny_pizza_ingredient_factory.h */