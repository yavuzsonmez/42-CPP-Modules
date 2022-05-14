#include "Weapon.hpp"

Weapon::Weapon(std::string type):_type(type) {
	//std::cout << "Weapon " << type << " initialised" << std::endl ;
}

Weapon::Weapon(void) {
	//std::cout << "Weapon initialised" << std::endl ;
}

Weapon::~Weapon(void) {
	//std::cout << "Weapon destroyed" << std::endl ;
}

const std::string&	Weapon::getType(void) const
{
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

