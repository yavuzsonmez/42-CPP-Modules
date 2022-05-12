# include <iostream>
# include <string>
# include <stdlib.h>

class Base
{
	public:
		Base() {};
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void)
{
	//sranddev();
	unsigned int random = rand() % 3;

	std::cout << "random = " << random << std::endl;
	if (random == 0)
		return new A;
	else if (random == 1)
		return new B;
	else if (random == 2)
		return new C;
	else
		return NULL;
}

void identify(Base *ptr)
{
	try
	{
		A *a = dynamic_cast<A*>(ptr);
		if (a)
			std::cout << "A" << std::endl;
	}
	catch(const std::exception &e) {}
	try
	{
		B *b = dynamic_cast<B*>(ptr);
		if (b)
			std::cout << "B" << std::endl;
	}
	catch(const std::exception &e) {}
	try
	{
		C *c = dynamic_cast<C*>(ptr);
		if (c)
			std::cout << "C" << std::endl;
	}
	catch(const std::exception &e) {}
}

void identify(Base &ptr)
{
	try
	{
		A a = dynamic_cast<A&>(ptr);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception &e) {}
	try
	{
		B b = dynamic_cast<B&>(ptr);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception &e) {}
	try
	{
		C c = dynamic_cast<C&>(ptr);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception &e) {}
}

int	main(void)
{

	Base *ptr = generate();

	std::cout << "From pointer: " << std::endl;
	identify(ptr);

	std::cout << "From reference: " << std::endl;
	identify(*ptr);

	delete ptr;
}