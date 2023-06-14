#include "Identify.hpp"

int randomNbrs(void)
{
	int rNbr = 0;
	srand(time(NULL) * getpid());
	rNbr = (rand() % 3) + 1;
	if (rNbr < 0)
		rNbr = -rNbr;
	return rNbr;
}

Base *generate(void) 
{
	Base *newBase = NULL;
	int rNbr = randomNbrs();
	switch (rNbr) {
		case 1: {
			newBase = new A;
			break;
		}
		case 2: {
			newBase = new B;
			break;
		}
		case 3: {
			newBase = new C;
			break;
		}
		default: {
			std::cout << "Error: generating" << std::endl;
			break;
		}	
	}
	return newBase;
}

void identify(Base* p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Error: identifying" << std::endl;
}


void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " class A" << std::endl;
	}
	
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void) b;
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " class B" << std::endl;
	}

	try
	{
		C &c = dynamic_cast<C &>(p);
		(void) c;
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " class C" << std::endl;
	}
}