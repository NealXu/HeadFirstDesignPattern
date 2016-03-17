#ifndef _GOOSE_ADAPTER_H_
#define _GOOSE_ADAPTER_H_

#include "quackable.h"
#include "goose.h"

class GooseAdapter : public Quackable
{
public:
	GooseAdapter(Goose *g)
	:goose(g)
	{

	}

	virtual void Quack()
	{
		goose->Honk();
	}

private:
	Goose *goose;
};

#endif