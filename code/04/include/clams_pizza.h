#ifndef _CLAMS_PIZZA_H_
#define _CLAMS_PIZZA_H_

#include <iostream>
#include "pizza.h"
#include "pizza_ingredient_factory.h"

using std::cout;
using std::endl;

class ClamsPizza : public Pizza
{
public:
    ClamsPizza(PizzaIngredientFactory * pIngredientFactory)
    : pIngrFact(pIngredientFactory)
    {
        
    }
    ~ClamsPizza()
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
        clams = pIngrFact->CreateClams();
        cout << "\t" << *clams << endl;
        
    }
private:
    PizzaIngredientFactory* pIngrFact;
};

#endif
/* end of clams_pizza.h */

