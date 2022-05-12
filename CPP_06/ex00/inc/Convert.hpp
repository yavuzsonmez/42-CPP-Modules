#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <stdlib.h>

enum type { isChar, isInt, isFloat, isDouble, isImpossible};

class Convert
{

	public:

		Convert();
		Convert(std::string);
		Convert( Convert const & src );
		~Convert();

		Convert &		operator=( Convert const & rhs );

		void	identifyType();
		void	convertAll();

		void	toChar();
		void	toInt();
		void	toFloat();
		void	toDouble();

		enum type	getType() const ;
		std::string	getToConvert() const ;
		char	getChar() const ;
		int		getInt() const ;
		float	getFloat() const ;
		double	getDouble() const ;

	private:

		std::string	_toConvert;

		enum type	_type;

		char		_char;
		int			_int;
		float		_float;
		double		_double;

};

std::ostream &	operator<<( std::ostream & o, Convert const & i );


#endif /* ********************************************************* CONVERT_H */