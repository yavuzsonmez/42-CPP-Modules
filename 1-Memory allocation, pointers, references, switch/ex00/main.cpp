#include "Zombie.hpp"

int main(void)
{
	Zombie *zm = newZombie("The Hunter");
	zm->announce();
	randomChump("The Boomer");
	delete zm;

	return (0);
}