#include "../inc/Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain was created" << std::endl;
	for (unsigned i = 0; i < 100; i++)
		_ideas[i] = "random idea";
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain cloned from " << src << " was created" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain ()
{
	std::cout << "Brain died" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (unsigned int i = 0; i < 100; i++)
			_ideas[i] = rhs._ideas[i];

		std::cout << &rhs << " rhs Brain was deeply copied to: "
		<< this << "lhs Brain" << std::endl;
		for (unsigned int i = 0; i < 5; i++)
			std::cout << " lhs idea " << _ideas + i << " = " << _ideas[i]
			<< " now equal to rhs idea " << rhs._ideas + i << " = " << rhs._ideas[i] << std::endl;
	}

	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & i )
{
	o << "Ideas: " << std::endl;

	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/



/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */