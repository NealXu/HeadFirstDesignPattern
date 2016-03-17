#include "mallard_duck.h"
#include "redhead_duck.h"
#include "rubber_duck.h"
#include "duck_call.h"
#include "goose_adapter.h"
#include "quack_counter.h"

class DuckSimulator
{
public:
	void Simulator()
	{
		MallardDuck md;
		Quackable *mallardDuck = new QuackCounter(&md);
		RedheadDuck rd;
		Quackable *redheadDuck = new QuackCounter(&rd);
		DuckCall dc;
		Quackable *duckCall = new QuackCounter(&dc);
		RubberDuck rbd;
		Quackable *rubberDuck = new QuackCounter(&rbd);
		Goose g;
		Quackable *gooseAdapter = new GooseAdapter(&g);

		cout << endl << "Duck Simulator: With Goose Adapter" << endl;

		Simulator(*mallardDuck);
		Simulator(*redheadDuck);
		Simulator(*duckCall);
		Simulator(*rubberDuck);
		Simulator(*gooseAdapter);

		cout << "The ducks quacked " << QuackCounter::GetQuacks() << " times" << endl;

		delete mallardDuck;
		delete redheadDuck;
		delete duckCall;
		delete rubberDuck;
		delete gooseAdapter;
	}

	void Simulator(Quackable &duck)
	{
		duck.Quack();
	}
};

int main()
{

	DuckSimulator ds;

	ds.Simulator();

	return 0;
}