#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "A zombie was born" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << name << " died" << std::endl;
}

void Zombie::setName (std::string str){

	name = str ;
}

void Zombie::announce (void){

	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
