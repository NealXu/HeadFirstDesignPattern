#ifndef _NY_STYLE_CHEESE_PIZZA_H_
#define _NY_STYLE_CHEESE_PIZZA_H_

#include "pizza.h"

class NYStyleCheesePizza : public Pizza
{
public:
    NYStyleCheesePizza()
    {
        name = "NY Style Sauce and Cheese Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";
        toppings.push_back("Grated Reggiano Cheege");
    }
    ~NYStyleCheesePizza(){}
};


#endif
/* end of ny_style_cheese_pizza.h */
