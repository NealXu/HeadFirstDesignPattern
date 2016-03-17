#ifndef _RED_HEAD_DUCK_H_
#define _RED_HEAD_DUCK_H_

#include <iostream>
#include "quackable.h"

using std::cout;
using std::endl;

class RedheadDuck : public Quackable
{
public:
	virtual void Quack()
	{
		cout << "Quack" << endl;
	}
};

#endif