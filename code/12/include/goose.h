#ifndef _GOOSE_H_
#define _GOOSE_H_

#include <iostream>
#include "quackable.h"

using std::cout;
using std::endl;

class Goose
{
public:
	void Honk()
	{
		cout << "Honk" << endl;
	}
};

#endif