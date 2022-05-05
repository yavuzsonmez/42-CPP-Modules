#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource():_name("materia source")
{
	std::cout << "Materia Source created" << std::endl;
	for (unsigned int i = 0; i < 4; i++)
		_inventory[i] = 0;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
	std::cout << "Materia Source cloned" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	std::cout << "Materia Source destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria*)
{

}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
		return new Ice();
	else if (type == "cure")
		return new Cure();
	else
		return (0);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */