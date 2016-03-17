#ifndef _RUBBER_DUCK_H_
#define _RUBBER_DUCK_H_

#include <iostream>
#include "quackable.h"

using std::cout;
using std::endl;

class RubberDuck : public Quackable
{
public:
	virtual void Quack()
	{
		cout << "Squeak" << endl;
	}
};

#endif