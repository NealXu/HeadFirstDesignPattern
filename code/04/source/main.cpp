#include "ny_pizza_store.h"
#include "chicago_pizza_store.h"


int main()
{
    NYPizzaStore nyStore;
    PizzaStore *pNyStore = &nyStore;

    ChicagoPizzaStore chStore;
    PizzaStore *pChStore = &chStore;
    
    
    Pizza *pNyCheese = pNyStore->OrderPizza(CHEESE);
    cout << "Ethan ordered a " << pNyCheese->GetName() << endl;
    
    Pizza *pChClams = pChStore->OrderPizza(CLAMS);
    cout << "Joel ordered a " << pChClams->GetName() << endl << endl;

    delete pNyCheese;
    delete pChClams;
    
    return 0;
}
