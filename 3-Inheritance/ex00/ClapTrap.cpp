#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap():_name("default"), _hit(10), _energy(10), _attack(0)
{
	std::cout << "Default Construcor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "Construcor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Copy constructor called with " << src << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		_name = rhs.getName();
		_hit = rhs.getHit();
		_energy = rhs.getEnergy();
		_attack = rhs.getAttack();
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o << i.getName() << " has "
	<< i.getHit() << " health points, "
	<< i.getEnergy() << " energy, "
	<< i.getAttack() << " attack damage." << std::endl;

	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack( std::string const & target )
{
	if (_energy > 0 && _hit > 0)
	{
		--_energy;
		std::cout << "ClapTrap " << _name
		<< " attacks " << target
		<< " causing " << _attack
		<< " points of damage! " << std::endl;
	}
	else
	{
		_energy < 1 ?
			std::cout << "No more energy." << std::endl :
			std::cout << _name << " died." << std::endl ;
	}
}

void ClapTrap::takeDamage( unsigned int amount )
{
		if (_hit < amount)
			_hit = 0;
		else
			_hit -= amount;
		std::cout << "ClapTrap " << _name
		<< " has taken " << amount
		<< " points of damage!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (_energy > 0 && _hit > 0)
	{
		_hit + amount < 10 ? _hit += amount : _hit = 10 ;
		--_energy;
		std::cout << "ClapTrap " << _name
		<< " has been repaired by  " << amount
		<< " points. Current Health is "
		<< _hit << "." << std::endl;
	}
	else
	{
		_energy < 1 ?
			std::cout << "No more energy." << std::endl :
			std::cout << _name << " died." << std::endl ;
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ClapTrap::getName() const
{
	return (_name);
}

unsigned int ClapTrap::getHit() const
{
	return (_hit);
}

unsigned int ClapTrap::getEnergy() const
{
	return (_energy);
}

unsigned int ClapTrap::getAttack() const
{
	return (_attack);
}


/* ************************************************************************** */