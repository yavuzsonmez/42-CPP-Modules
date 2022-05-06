#include "../inc/Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure():AMateria::AMateria("cure")
{
	std::cout << "Cure Materia created" << std::endl;
}

Cure::Cure( const Cure & src )
{
	std::cout << "Cure Materia cloned from another Ice Materia" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	std::cout << "Cure Materia destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	std::cout << "Cure Materia lsh now equal to Materia rhs" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Cure* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */