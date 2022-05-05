#include "../inc/Character.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	std::cout << "Default Character created" << std::endl;
	for (unsigned int i = 0; i < 4; i++)
		_inventory[i] = 0;
}

Character::Character(std::string const & name):_name(name)
{
	std::cout << _name << " Character created" << std::endl;
	for (unsigned int i = 0; i < 4; i++)
		_inventory[i] = 0;
}

Character::Character( const Character & src )
{
	*this = src;
	std::cout << "Character cloned" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	std::cout << _name << " Character destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		_name = rhs._name;
		for (unsigned int i = 0; i < 4; i++)
			*_inventory[i] = *rhs._inventory[i];
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria* m)
{
	unsigned int i = 0;

	if (m == NULL)
	{
		std::cout << "No materia to equip";
		return ;
	}
	while (i < 4)
	{
		if (_inventory[i] == 0)
		{
			_inventory[i] = m;
			std::cout << "The Materia was successfully equiped" << std::endl;
			break;
		}
		i++;
	}
	if (i == 4)
		std::cout << "No space left on the inventory" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Not part of the inventory" << std::endl;
		return;
	}
	if (_inventory[idx] != 0)
	{
		_inventory[idx] = 0;
		std::cout << "The Materia was successfully unequiped" << std::endl;
	}
	else
		std::cout << "No Materia there" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Not part of the inventory" << std::endl;
		return;
	}
	if (_inventory[idx] != 0)
		_inventory[idx]->use(target);
	else
		std::cout << "No Materia there" << std::endl;

}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Character::getName() const
{
	return _name;
}

/* ************************************************************************** */