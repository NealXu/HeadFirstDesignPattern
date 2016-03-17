#ifndef _QUACK_COUNTER_H_
#define _QUACK_COUNTER_H_

#include "quackable.h"

class QuackCounter : public Quackable
{
public:
	QuackCounter(Quackable *q)
	:quack(q)
	{

	}

	virtual void Quack()
	{
		counter++;
		quack->Quack();
	}

	static int GetQuacks()
	{
		return counter;
	}
private:
	Quackable *quack;
	static int counter;
};

int QuackCounter::counter = 0;

#endif