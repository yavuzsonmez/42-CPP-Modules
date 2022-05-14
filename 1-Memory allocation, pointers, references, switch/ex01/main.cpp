#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(10, "Spitter");

	delete [] horde;

	return (0);
}