#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"

/*	For Human B weapon is a ptr and not a reference:
*		- Because a reference is a constant ptr, always dereferenced and never NULL
*		- In this case "HumanB may not always have a Weapon, whereas HumanA will always be armed.
*		- Human B's weapon is not initialized in the constructor and because a reference cannot be null
*			we have to use a pointer.
*/

class HumanB {

	public:
		HumanB(std::string name);
		~HumanB(void);
		void setWeapon(Weapon &weapon);
		void attack(void) const ;

	private:
		std::string _name;
		Weapon *_weapon;

};



#endif