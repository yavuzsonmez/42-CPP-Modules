#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap():_name("default"), _hit(100), _energy(100), _attack(30)
{
	std::cout << "ClapTrap Default Construcor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name), _hit(100), _energy(100), _attack(30)
{
	std::cout << "ClapTrap Construcor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "ClapTrap Copy constructor called with " << src << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
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
	o << i.getName() << " ClapTrap has "
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
			std::cout << "No more energy. Cannot attack." << std::endl :
			std::cout << _name << " died. Cannot attack." << std::endl ;
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
		_hit += amount ;
		--_energy;
		std::cout << "ClapTrap " << _name
		<< " has been repaired by  " << amount
		<< " points. Current Health is "
		<< _hit << "." << std::endl;
	}
	else
	{
		_energy < 1 ?
			std::cout << "No more energy. Cannot be repaired." << std::endl :
			std::cout << _name << " died. Cannot be repaired." << std::endl ;
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

void ClapTrap::setName(std::string name)
{
	_name = name;
}

void ClapTrap::setHit(unsigned int hit)
{
	_hit = hit;
}

void ClapTrap::setEnergy(unsigned int energy)
{
	_energy = energy;
}

void ClapTrap::setAttack(unsigned int attack)
{
	_attack = attack;
}

/* ************************************************************************** */