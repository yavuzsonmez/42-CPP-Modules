#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Samus");

	a.attack("Metroid");
	a.takeDamage(99);
	std::cout << a;
	a.beRepaired(100);
	a.guardGate();

	a.takeDamage(101);
	std::cout << a;
	a.attack("Metroid");

	return (0);
}
