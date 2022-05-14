#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main()
{
	{
		unsigned int n = 8;
		AAnimal* zoo[n];

		for (unsigned int i = 0; i < n; i++)
		{
			if (i < (n/2))
				zoo[i] = new Cat();
			else
				zoo[i] = new Dog();
		}

		for (unsigned int i = 0; i < n; i++)
			delete zoo[i];
	}
	{
		 Cat a;
		 Cat b;

		 std::cout << std::endl << "Cloning a Cat" << std::endl;
		 a = b;
	}

	//AAnimal test;

	system("leaks Abstract");
	return (0);
}
