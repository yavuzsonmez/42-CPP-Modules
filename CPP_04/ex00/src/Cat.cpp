#include "../inc/Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	type = "Cat";
	std::cout << "A Cat was born" << std::endl;
}

Cat::Cat( const Cat & src )
{
	std::cout << "A Cat cloned from " << src.type << " was born" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "A Cat died" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat will now be the same as " << rhs.type << std::endl;

	if ( this != &rhs )
		type = rhs.type;

	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "I am a Cat" << std::endl;

	return (o);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			Cat::makeSound() const
{
	std::cout << "Meooooooow" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */