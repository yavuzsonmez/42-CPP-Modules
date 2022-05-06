#include "../inc/Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice():AMateria::AMateria("ice")
{
	std::cout << "Ice Materia created" << std::endl;
}

Ice::Ice( const Ice & src )
{
	std::cout << "Ice Materia cloned from another Ice Materia" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	std::cout << "Ice Materia destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	std::cout << "Ice Materia lsh now equal to Materia rhs" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Ice* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots and ice bolt at " << target.getName() << " *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */