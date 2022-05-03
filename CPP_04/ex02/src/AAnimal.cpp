#include "../inc/AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal():type("Chimera")
{
	std::cout << "Animal " << type << " was born" << std::endl;
}

AAnimal::AAnimal( const AAnimal & src )
{
	std::cout << "Animal cloned from " << src.type << " was born" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal ()
{
	std::cout << "Animal " << type << " died" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "Animal " << type << " will now be the same as " << rhs.type << std::endl;

	if ( this != &rhs )
		type = rhs.type;

	return *this;
}

std::ostream &			operator<<( std::ostream & o, AAnimal const & i )
{
	o << "I am an animal of type: " << i.getType() << std::endl;

	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			AAnimal::makeSound() const
{
	std::cout << "Animal makes sound" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			AAnimal::getType() const
{
	return (type);
}


/* ************************************************************************** */