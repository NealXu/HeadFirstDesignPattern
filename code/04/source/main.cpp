#include "ny_style_pizza_store.h"

int main()
{
    NYStylePizzaStore nypz;
    PizzaStore *pPs = &nypz;
    string cheese("cheese");

    Pizza *pPz = pPs->OrderPizza(cheese);

    delete pPz;
    
    return 0;
}
