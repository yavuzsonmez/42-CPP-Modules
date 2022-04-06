#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

	public:
		Zombie(void);
		~Zombie(void);
		void setName(std::string str);
		void announce(void);

	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif