#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Construcor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap Construcor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "ScavTrap Copy constructor called with " << src << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		setName(rhs.getName());
		setHit(rhs.getHit());
		setEnergy(rhs.getEnergy());
		setAttack(rhs.getAttack());
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "ScavTrap " << i.getName() << " has "
	<< i.getHit() << " health points, "
	<< i.getEnergy() << " energy, "
	<< i.getAttack() << " attack damage." << std::endl;

	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack( std::string const & target )
{
	if (getEnergy() > 0 && getHit() > 0)
	{
		setEnergy(getEnergy() - 1);
		std::cout << "ScavTrap " << getName()
		<< " attacks " << target
		<< " causing " << getAttack()
		<< " points of damage! " << std::endl;
	}
	else
	{
		getEnergy() < 1 ?
			std::cout << "No more energy. Cannot attack." << std::endl :
			std::cout << getName() << " died. Cannot attack." << std::endl ;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */