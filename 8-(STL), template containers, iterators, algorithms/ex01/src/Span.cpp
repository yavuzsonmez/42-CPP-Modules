#include "../inc/Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _max(0) {}

Span::Span(unsigned int N) : _max(N){}

Span::Span( const Span & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


const char* Span::NoSpaceLeftException::what() const throw()
{
	return ("Cannot add this number! No Space left.");
}

void	Span::addNumber(int number)
{
	if (_data.size() == _max)
		throw(NoSpaceLeftException());
	else
		_data.push_back(number);
}

int shortestSpan( void )
{
	return 1;
}

int longestSpan( void )
{
	return 1;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */