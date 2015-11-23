#ifndef _CHICAGO_STYLE_CHEESE_PIZZA_H_
#define _CHICAGO_STYLE_CHEESE_PIZZA_H_

#include "pizza.h"

class ChicagoStyleCheesePizza : public Pizza
{
public:
    ChicagoStyleCheesePizza()
    {
        name = "Chicago Style Deep Dish Cheese Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";
        toppings.push_back("Shredded Mozzarella Cheese");
    }
    ~ChicagoStyleCheesePizza(){}

    void Cut()
    {
        cout << "Cutting the pizza into square slices" << endl;
    }
};


#endif
/* end of ny_style_cheese_pizza.h */

