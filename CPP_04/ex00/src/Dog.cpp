#include "../inc/Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	type = "Dog";
	std::cout << "A Dog was born" << std::endl;
}

Dog::Dog( const Dog & src )
{
	std::cout << "A Dog cloned from " << src.type << " was born" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "A Dog died" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog will now be the same as " << rhs.type << std::endl;

	if ( this != &rhs )
		type = rhs.type;

	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "I am a Dog" << std::endl;

	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Dog::makeSound() const
{
	std::cout << "Baark Barrk" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */