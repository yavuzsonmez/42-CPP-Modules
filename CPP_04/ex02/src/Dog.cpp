#include "../inc/Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog():_brain(new Brain())
{
	type = "Dog";
	std::cout << "A Dog was born" << std::endl;
}

Dog::Dog( const Dog & src ):_brain(new Brain(*(src._brain)))
{
	std::cout << "A Dog cloned from " << src.type << " was born" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete _brain ;
	std::cout << "A Dog died" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
		*(_brain) = *(rhs._brain);

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