#include "../inc/Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span () : _max(0) {}

Span::Span (unsigned int N) : _max(N){}

Span::Span ( const Span & src ) { *this = src; }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	_max = rhs._max;
	_data.clear();
	addManyNumbers(rhs._data);
	return *this;
}



std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	std::cout << "Vector Data: ";
	i.print_vector();
	std::cout << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::print(const int & n)
{
	std::cout << n << " ";
};

void Span::print_vector() const
{
	std::for_each(_data.begin(), _data.end(), Span::print);
};

const char* Span::NoSpaceLeftException::what() const throw()
{
	return ("Cannot add this number! No Space left.");
}

const char* Span::NotEnoughSpaceException::what() const throw()
{
	return ("Cannot add the range of numbers! Range to Big.");
}

void	Span::addNumber(int number)
{
	if (_data.size() == _max)
		throw(NoSpaceLeftException());
	else
		_data.push_back(number);
}

void Span::addManyNumbers( std::vector <int> const & range )
{
	if (range.size() + _data.size() > _max)
		throw(NotEnoughSpaceException());
	else
		_data.insert(_data.begin(), range.begin(), range.end());
}

int Span::shortestSpan( void )
{
	std::vector<int>::iterator begin = _data.begin();
	std::vector<int>::iterator it = begin + 1;
	std::vector<int>::iterator end = _data.end();
	std::sort(begin, end);
	unsigned int span = *(end - 1) - *begin;

	for (; it != end; it++)
	{
		if ((*it -  *begin) < span )
			span = *it - *begin;
		++begin;
	}

	return span;
}

int Span::longestSpan( void )
{
	std::vector<int>::iterator begin = _data.begin();
	std::vector<int>::iterator end = _data.end();
	std::sort(begin, end);
	return (*(end - 1) - *begin);
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */