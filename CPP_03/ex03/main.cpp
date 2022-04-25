#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("Monster");

	a.whoAmI();
	std::cout << a;

	a.attack("Samus");

	return (0);
}
