#ifndef _MENU_COMPONENT_H_
#define _MENU_COMPONENT_H_

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Unsupported
{
public:
	Unsupported()
	{
		cout << "this function is not supported." << endl;
	}
};

class MenuComponent
{
public:
	virtual void Add(MenuComponent *mc)
	{
		throw Unsupported();
	}

	virtual void Delete(MenuComponent *mc)
	{
		throw Unsupported();
	}

	virtual MenuComponent *GetChild(int i)
	{
		throw Unsupported();
	}

	virtual string &GetName()
	{
		throw Unsupported();
	}

	virtual string &GetDescription()
	{
		throw Unsupported();
	}

	virtual double GetPrice()
	{
		throw Unsupported();
	}

	virtual bool IsVegetarian()
	{
		throw Unsupported();
	}

	virtual void Print()
	{
		throw Unsupported();
	}
};

#endif
/* end of menu_component.h */
