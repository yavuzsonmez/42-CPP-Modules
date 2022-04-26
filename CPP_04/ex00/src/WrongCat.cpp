#include "../inc/WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "A WrongCat was born" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "A WrongCat cloned from " << src.type << " was born" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "A WrongCat died" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "WrongCat will now be the same as " << rhs.type << std::endl;

	if ( this != &rhs )
		type = rhs.type;

	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongCat const & i )
{
	o << "I am a WrongCat" << std::endl;

	return (o);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			WrongCat::makeSound() const
{
	std::cout << "Meooooooow" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */