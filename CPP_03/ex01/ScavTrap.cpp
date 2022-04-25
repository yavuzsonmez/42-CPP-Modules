#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(std::string name):_name(name)
{
	std::cout << "ScavTrap Construcor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "ScavTrap Copy constructor called with " << src << std::endl;
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
	o << i.getName() << " ScavTrap has "
	<< i.getHit() << " health points, "
	<< i.getEnergy() << " energy, "
	<< i.getAttack() << " attack damage." << std::endl;

	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode.";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */