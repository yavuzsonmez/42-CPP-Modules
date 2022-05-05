#include "../inc/AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	std::cout << "Materia default created" << std::endl;
}

AMateria::AMateria(std::string const & type):type(type)
{
	std::cout << "Materia was created" << std::endl;
}

AMateria::AMateria( const AMateria & src )
{
	std::cout << "Materia cloned from another Materia" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	std::cout << "Materia destroyed" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void AMateria::use(ICharacter& target)
{

}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & AMateria::getType() const
{
	return (type);
}

/* ************************************************************************** */