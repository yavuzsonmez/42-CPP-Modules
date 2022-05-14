#include "../inc/Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal():type("Chimera")
{
	std::cout << "Animal " << type << " was born" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal cloned from " << src.type << " was born" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal ()
{
	std::cout << "Animal " << type << " died" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal " << type << " will now be the same as " << rhs.type << std::endl;

	if ( this != &rhs )
		type = rhs.type;

	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "I am an animal of type: " << i.getType() << std::endl;

	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Animal::makeSound() const
{
	std::cout << "Animal makes sound" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			Animal::getType() const
{
	return (type);
}


/* ************************************************************************** */