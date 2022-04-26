#include "../inc/WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal():type("Chimera")
{
	std::cout << "WrongAnimal " << type << " was born" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "WrongAnimal cloned from " << src.type << " was born" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal ()
{
	std::cout << "WrongAnimal " << type << " died" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "WrongAnimal " << type << " will now be the same as " << rhs.type << std::endl;

	if ( this != &rhs )
		type = rhs.type;

	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << "I am an WrongAnimal of type: " << i.getType() << std::endl;

	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes sound" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			WrongAnimal::getType() const
{
	return (type);
}


/* ************************************************************************** */