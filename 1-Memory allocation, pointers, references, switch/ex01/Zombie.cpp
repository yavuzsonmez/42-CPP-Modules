#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "A zombie was born" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << _name << " died" << std::endl;
}

void Zombie::setName (std::string name){

	_name = name ;
}

void Zombie::announce (void){

	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
