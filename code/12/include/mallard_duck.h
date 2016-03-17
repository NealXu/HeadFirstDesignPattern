#ifndef _MALLARD_DUCK_H_
#define _MALLARD_DUCK_H_

#include <iostream>
#include "quackable.h"

using std::cout;
using std::endl;

class MallardDuck : public Quackable
{
public:
	virtual void Quack()
	{
		cout << "Quack" << endl;
	}
};

#endif