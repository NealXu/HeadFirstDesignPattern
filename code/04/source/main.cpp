#include "ny_style_pizza_store.h"
#include "chicago_style_pizza_store.h"


int main()
{
    string cheese("cheese");
    
    NYStylePizzaStore nyStore;
    PizzaStore *pNyStore = &nyStore;

    
    ChicagoStylePizzaStore chStore;
    PizzaStore *pChStore = &chStore;
    
    

    Pizza *pNyCheese = pNyStore->OrderPizza(cheese);
    cout << "Ethan ordered a " << pNyCheese->GetName() << endl;
    
    Pizza *pChCheese = pChStore->OrderPizza(cheese);
    cout << "Joel ordered a " << pChCheese->GetName() << endl << endl;

    delete pNyCheese;
    delete pChCheese;
    
    return 0;
}
