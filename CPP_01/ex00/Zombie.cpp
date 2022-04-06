#include "Zombie.hpp"

Zombie::Zombie(std::string str):name(str) {
	std::cout << name << " was born" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << name << " died" << std::endl;
}

void Zombie::announce (void){

	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
