#ifndef _CHEESE_PIZZA_H_
#define _CHEESE_PIZZA_H_

#include <iostream>
#include "pizza.h"
#include "pizza_ingredient_factory.h"

using std::cout;
using std::endl;

class CheesePizza : public Pizza
{
public:
    CheesePizza(PizzaIngredientFactory * pIngredientFactory)
    : pIngrFact(pIngredientFactory)
    {
        
    }
    ~CheesePizza()
    {
        
    }

    virtual void Prepare()
    {
        cout << endl;
        cout << "Preparing " << name << ", ingredients :" << endl;
        dough = pIngrFact->CreateDough();
        cout << "\t" << *dough << endl;
        cheese = pIngrFact->CreateCheese();
        cout << "\t" << *cheese << endl;
        sauce = pIngrFact->CreateSauce();
        cout << "\t" << *sauce << endl;
        
    }
private:
    PizzaIngredientFactory* pIngrFact;
};

#endif
/* end of cheese_pizza.h */