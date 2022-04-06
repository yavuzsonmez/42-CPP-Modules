#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_name(name), _weapon(weapon) {
	//std::cout << "Human A called " << name << " with " << weapon.getType() << " is alive" << std::endl ;
}

HumanA::~HumanA(void) {
	//std::cout << "Human A died" << std::endl ;
}

void HumanA::attack(void) const {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl ;
}
