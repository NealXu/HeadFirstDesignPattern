#ifndef _PIZZA_H_
#define _PIZZA_H_

#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class Pizza
{
public:
    Pizza() 
    {
        name = "pizza";
        dough = "dough";
        sauce = "sauce";
    }
    virtual ~Pizza() {}

    virtual void Prepare()
    {
        cout << "Preparing " << name << endl;
        cout << "Tossing " << dough << "..."<< endl;
        cout << "Adding " << sauce << "..." << endl;
        cout << "Adding toppings: " << endl;
        for (int i = 0; i < toppings.size(); ++i)
        {
            cout << toppings[i] << endl;
        }
    }
    virtual void Bake()
    {
        cout << "Bake for 25 minutes at 350" << endl;
    }
    virtual void Cut()
    {
        cout << "Cutting the pizza into diagonal slices" << endl;
    }
    virtual void Box()
    {
        cout << "Place pizza in official PizzaStore box" << endl;
    }

protected:
    string name;
    string dough;
    string sauce;
    vector<string> toppings;
    
};

#endif
/* end of pizza.h */
