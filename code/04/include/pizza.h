#ifndef _PIZZA_H_
#define _PIZZA_H_

#include <vector>
#include <string>
#include <iostream>

#include "dough.h"
#include "sauce.h"
#include "cheese.h"
#include "veggies.h"
#include "pepperoni.h"
#include "clams.h"


using std::vector;
using std::string;
using std::cout;
using std::endl;

typedef enum
{
    CHEESE = 0,
    CLAMS,
    VEGGIES,
    PEPPERONI,
}T_PIZZA_TYPE;

class Pizza
{
public:
    Pizza() 
    {
        name = "pizza";
        dough = NULL;
        sauce = NULL;
        cheese = NULL;
        clams = NULL;
        veggies = NULL;
        pepperoni = NULL;
    }
    virtual ~Pizza() 
    {
        if (NULL != dough)
        {
            delete dough;
        }
        if (NULL != sauce)
        {
            delete sauce;
        }
        if (NULL != cheese)
        {
            delete cheese;
        }
        if (NULL != clams)
        {
            delete clams;
        }
        if (NULL != veggies)
        {
            for (vector<Veggies *>::iterator iter = veggies->begin(); 
                 iter != veggies->end(); ++iter)
            {
                if (*iter != NULL)
                {
                    Veggies *tmp = *iter;
                    veggies->erase(iter);
                    delete tmp;
                }
            }
            delete veggies;
        }
        if (NULL != pepperoni)
        {
            delete pepperoni;
        }
    }

    virtual void Prepare() = 0;
/*
    virtual void Prepare()
    {
        cout << endl;
        cout << "Preparing " << name << endl;
        cout << "Tossing " << dough << "..."<< endl;
        cout << "Adding " << sauce << "..." << endl;
        cout << "Adding toppings: " << endl;
        for (int i = 0; i < toppings.size(); ++i)
        {
            cout << "\t" << toppings[i] << endl;
        }
    }
    */
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

    string GetName()
    {
        return name;
    }

    void SetName(const string & nm)
    {
        name = nm;
    }

protected:
    string name;
    Dough* dough;
    Sauce* sauce;
    vector<Veggies*>* veggies;
    Cheese* cheese;
    Clams* clams;
    Pepperoni* pepperoni;
    //string dough;
    //string sauce;
    //vector<string> toppings;
    
};

#endif
/* end of pizza.h */
