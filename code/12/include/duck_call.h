#ifndef _DUCK_CALL_H_
#define _DUCK_CALL_H_

#include <iostream>
#include "quackable.h"

using std::cout;
using std::endl;

class DuckCall : public Quackable
{
public:
	virtual void Quack()
	{
		cout << "Kwak" << endl;
	}
};

#endif