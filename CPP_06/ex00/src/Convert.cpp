#include "../inc/Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert()
{
	std::cout << "Constructor called" << std::endl;
}

Convert::Convert(std::string toConvert): _toConvert(toConvert)
{
	std::cout << "Constructor called with " << _toConvert << std::endl;

}

Convert::Convert( const Convert & src )
{
	std::cout << "Copy constructor called" << _toConvert << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Convert::~Convert()
{
	std::cout << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Convert &	Convert::operator=( Convert const & rhs )
{
	if ( this != &rhs )
	{
		_toConvert = rhs._toConvert;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Convert::toChar()
{
	_char = static_cast<char>(_double);
}

void		Convert::toInt()
{
	_int = static_cast<int>(_double);
}

void	Convert::toFloat()
{
	_float = static_cast<float>(_double);
}

void	Convert::toDouble()
{
	_double = static_cast<double>(_double);
}

void	Convert::identifyType()
{
	unsigned int i = 0;

	if (_toConvert.length() == 1 && !isdigit(_toConvert[0]) && isprint(_toConvert[0]))
	{
		_type = _char;
		return ;
	}
	else
		_type = _int;
	if (_toConvert[0] == '-' || _toConvert[0] == '+')
		i++;
	while (_toConvert[i])
	{
		if (!isdigit(_toConvert[i]) && _type != _double)
			_type = _impossible
		else if (_toConvert[i] == '.')
			_type = _double;
		else if (_type == _double && _toConvert[i] == 'f')
			_type = _float;
		i++;
	}
	std::istringstream(_toConvert) >> _double;
}



void	Convert::all()
{
	identifyType();
	stoi();
	toChar();
	toInt();
	toFloat();
	toDouble();
	 std::cout << "char: " << _char << std::endl
	 << "int: " << _int << std::endl;
	 << "float: " << _float << std::endl;
	 << "double: " << _double <<std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */