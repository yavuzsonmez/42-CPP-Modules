#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{
	std::cout << "FragTrap Defaut Construcor called" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap Construcor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "FragTrap Copy constructor called with " << src << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
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

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
	o << "FragTrap " << i.getName() << " has "
	<< i.getHit() << " health points, "
	<< i.getEnergy() << " energy, "
	<< i.getAttack() << " attack damage." << std::endl;

	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << getName() << ": \"could you high five me?\"" << std::endl;
}

void FragTrap::attack( std::string const & target )
{
	if (getEnergy() > 0 && getHit() > 0)
	{
		setEnergy(getEnergy() - 1);
		std::cout << "FragTrap " << getName()
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