#include "../inc/Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat():_brain(new Brain())
{
	type = "Cat";
	std::cout << "A Cat was born" << std::endl;
}

Cat::Cat( const Cat & src )
{
	_brain = src._brain;
	std::cout << "A Cat cloned from " << src.type << " was born" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete _brain ;
	std::cout << "A Cat died" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
		*(_brain) = *(rhs._brain);

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