#ifndef _ABSTRACT_DUCK_FACTORY_H_
#define _ABSTRACT_DUCK_FACTORY_H_

#include "quackable.h"

class AbstractDuckFactory
{
public:
	virtual Quackable * CreateMallardDuck() = 0;
	virtual Quackable * CreateRedheadDuck() = 0;
	virtual Quackable * CreateDuckCall() = 0;
	virtual Quackable * CreateRubberDuck() = 0;
};

#endif