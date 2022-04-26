#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound();
		j->makeSound();
		meta->makeSound();


		delete j;
		delete i;
		delete meta;
	}
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound();
		j->makeSound();
		meta->makeSound();


		delete j;
		delete i;
		delete meta;
	}

	return (0);
}
