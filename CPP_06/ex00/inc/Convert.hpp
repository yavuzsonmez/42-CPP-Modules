#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <sstream>

enum type { _char, _int, _float, _double, _impossible};

class Convert
{

	public:

		Convert();
		Convert(std::string);
		Convert( Convert const & src );
		~Convert();

		Convert &		operator=( Convert const & rhs );

		void	identifyType();

		void	toChar(void);
		void	toInt(void);
		void	toFloat(void);
		void	toDouble(void);

		void	all(void);

	private:

		std::string	_toConvert;
		enum type _type;
		char		_char;
		int			_int;
		float		_float;
		double		_double;

};

#endif /* ********************************************************* CONVERT_H */