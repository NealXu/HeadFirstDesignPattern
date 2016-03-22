#ifndef _COUNTING_DUCK_FACTORY_H_
#define _COUNTING_DUCK_FACTORY_H_

#include "abstract_duck_factory.h"
#include "quack_counter.h"
#include "mallard_duck.h"
#include "redhead_duck.h"
#include "rubber_duck.h"
#include "duck_call.h"

class CountingDuckFactory : public AbstractDuckFactory
{
public:
	virtual Quackable * CreateMallardDuck()
	{
		return new QuackCounter(&mallardDuck);
	}
	virtual Quackable * CreateRedheadDuck()
	{
		return new QuackCounter(&redheadDuck);
	}
	virtual Quackable * CreateDuckCall()
	{
		return new QuackCounter(&duckCall);
	}
	virtual Quackable * CreateRubberDuck()
	{
		return new QuackCounter(&rubberDuck);
	}
private:
	MallardDuck mallardDuck;
	RedheadDuck redheadDuck;
	DuckCall duckCall;
	RubberDuck rubberDuck;
};

#endif