#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a("Dark Samus");

	a.attack("Metroid");
	a.takeDamage(32);
	std::cout << a;
	a.beRepaired(15);
	a.highFivesGuys();


	return (0);
}
