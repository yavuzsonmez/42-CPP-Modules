#include "../inc/MateriaSource.hpp"

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
	for (unsigned int i = 0; i < 4; i++)
	{
		if (_inventory[i] != 0)
			delete _inventory[i];
	}
	std::cout << "Materia Source destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (unsigned int i = 0; i < 4; i++)
		{
			if (_inventory[i] != 0)
			{
				delete _inventory[i];
				_inventory[i] = 0;
			}
			if (rhs._inventory[i] != 0)
			{
				_inventory[i] = rhs._inventory[i]->clone();
				std::cout << "Materia copied from rhs to lhs" << std::endl;
			}
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* m)
{
	unsigned int i = 0;

	if (m == NULL)
	{
		std::cout << "No materia to learn";
		return ;
	}
	while (i < 4)
	{
		if (_inventory[i] == 0)
		{
			_inventory[i] = m;
			std::cout << "The Materia was successfully learnt" << std::endl;
			break;
		}
		i++;
	}
	if (i == 4)
		std::cout << "No space left to learn new Materia" << std::endl;
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