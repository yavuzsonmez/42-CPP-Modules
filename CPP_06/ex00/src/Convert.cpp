#include "../inc/Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert(): _toConvert(0)
{
	std::cout << "Constructor called" << std::endl;
	identifyType();
	convertAll();
}

Convert::Convert(std::string toConvert): _toConvert(toConvert)
{
	std::cout << "Constructor called with " << _toConvert << std::endl;
	identifyType();
	convertAll();
}

Convert::Convert( const Convert & src )
{
	std::cout << "Copy constructor called" << std::endl;
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
		_toConvert = rhs._toConvert;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Convert::toChar()
{
	if (_type == isInt)
		_char = static_cast<char>(_int);
	else if (_type == isFloat)
		_char = static_cast<char>(_float);
	else if (_type == isDouble)
		_char = static_cast<char>(_double);
}

void	Convert::toInt()
{
	if (_type == isChar)
		_int = static_cast<int>(_char);
	else if (_type == isFloat)
		_int = static_cast<int>(_float);
	else if (_type == isDouble)
		_int = static_cast<int>(_double);
}

void	Convert::toFloat()
{
	if (_type == isChar)
		_float = static_cast<float>(_char);
	else if (_type == isInt)
		_float = static_cast<float>(_int);
	else if (_type == isDouble)
		_float = static_cast<float>(_double);
}

void	Convert::toDouble()
{
	if (_type == isChar)
		_double = static_cast<double>(_char);
	else if (_type == isInt)
		_double = static_cast<double>(_int);
	else if (_type == isFloat)
		_double = static_cast<double>(_float);
}

void	Convert::identifyType()
{
	unsigned int i = 0;

	if (_toConvert.length() == 1 && !isdigit(_toConvert[0]) && isprint(_toConvert[0]))
	{
		_type = isChar;
		_char = _toConvert[0];
		return ;
	}
	else
		_type = isInt;
	if (_toConvert[0] == '-' || _toConvert[0] == '+')
		i++;
	while (_toConvert[i])
	{
		if (_toConvert[i] == '.' && i > 0)
			_type = isDouble;
		else if (_type == isDouble && _toConvert[i] == 'f' && !_toConvert[i+1])
			_type = isFloat;
		else if (_toConvert[i] && !isdigit(_toConvert[i]))
			_type = isImpossible;
		i++;
	}
	if (_type == isInt)
		std::istringstream(_toConvert) >> _int;
	else if (_type == isFloat)
		_float = atof(_toConvert.c_str());
	else if (_type == isDouble)
		_double = atof(_toConvert.c_str());
}

void	Convert::convertAll()
{
	if (_type == isImpossible)
		return ;
	toChar();
	toInt();
	toFloat();
	toDouble();
}

std::ostream &			operator<<( std::ostream & o, Convert const & i )
{
	std::stringstream tmp;
	std::string str;

	tmp << i.getFloat();
	str = tmp.str();
	if (i.getType() == isImpossible)
	{
		o << "char: impossible" << std::endl
		<< "int: impossible" << std::endl;
		if (i.getToConvert() == "-inf" || i.getToConvert() == "-inff")
		{
			o << "float: -inff" << std::endl
			<< "double: -inf" << std::endl;
		}
		else if (i.getToConvert() == "+inf" || i.getToConvert() == "+inff")
		{
			o << "float: +inff" << std::endl
			<< "double: +inf" << std::endl;
		}
		else
		{
			o << "float: nanf" << std::endl
			<< "double: nan" << std::endl;
		}
	}
	else
	{
		if (isprint(i.getChar()))
			o << "char: " << i.getChar() << std::endl;
		else
			o << "char: Non displayable" << std::endl;
		o << "int: " << i.getInt() << std::endl;

		if (str.find('.') != std::string::npos)
			o << "float: " << i.getFloat() << "f" << std::endl
			<< "double: " << i.getDouble() << std::endl;
		else
			o << "float: " << i.getFloat() << ".0f" << std::endl
			<< "double: " << i.getDouble() << ".0" << std::endl;
	}
	return (o);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Convert::getToConvert() const
{
	return _toConvert;
}

enum type	Convert::getType() const
{
	return _type;
}

char	Convert::getChar() const
{
	return _char;
}

int		Convert::getInt() const
{
	return _int;
}

float	Convert::getFloat() const
{
	return _float;
}

double	Convert::getDouble() const
{
	return _double;
}

/* ************************************************************************** */