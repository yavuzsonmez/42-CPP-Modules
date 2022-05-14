#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default Construcor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):_name(name), ClapTrap(name, 100, 50, 30)
{
	std::cout << "DiamondTrap Construcor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "DiamondTrap Copy constructor called with " << src << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		_name = rhs.getDname();
		setName(rhs.getName());
		setHit(rhs.getHit());
		setEnergy(rhs.getEnergy());
		setAttack(rhs.getAttack());
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i )
{
	o << "DiamondTrap " << i.getDname() << " has "
	<< i.getHit() << " health points, "
	<< i.getEnergy() << " energy, "
	<< i.getAttack() << " attack damage." << std::endl;

	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is " << _name
	<< " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}

void DiamondTrap::attack( std::string const & target )
{
	ScavTrap::attack(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string DiamondTrap::getDname() const
{
	return (_name);
}

/* ************************************************************************** */