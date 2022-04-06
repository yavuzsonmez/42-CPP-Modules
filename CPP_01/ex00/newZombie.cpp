#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {

	Zombie *zm = new Zombie(name);

	return zm;
}