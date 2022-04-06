#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name){
	//std::cout << "Human B called " << name << " is alive" << std::endl ;
}

HumanB::~HumanB(void) {
	//std::cout << "Human B died" << std::endl ;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon ;
}

void HumanB::attack(void) const {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl ;
}