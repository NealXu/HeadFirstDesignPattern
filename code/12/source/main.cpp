#include "goose_adapter.h"
#include "counting_duck_factory.h"

class DuckSimulator
{
public:
	void Simulator()
	{
		CountingDuckFactory countDuckFactory;
		Quackable *mallardDuck = countDuckFactory.CreateMallardDuck();
		Quackable *redheadDuck = countDuckFactory.CreateRedheadDuck();
		Quackable *duckCall = countDuckFactory.CreateDuckCall();
		Quackable *rubberDuck = countDuckFactory.CreateRubberDuck();

		Goose g;
		Quackable *gooseAdapter = new GooseAdapter(&g);

		cout << endl << "Duck Simulator: With Abstract Factory" << endl;

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