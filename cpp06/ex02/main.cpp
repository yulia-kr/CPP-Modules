#include "Identify.hpp"

int main(void)
{

	Base h;
	identify(h);

	Base *genBase = generate();
	identify(genBase);
	identify(*genBase);

	Base *genBase1 = generate();
	identify(genBase1);
	identify(*genBase1);

	Base *genBase2 = generate();
	identify(genBase2);
	identify(*genBase2);

	delete genBase;
	delete genBase1;
	delete genBase2;
	return 0;
}
