#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>

class Ice : virtual public AMetaria
{

	public:

		Ice();
		Ice( Ice const & src );
		~Ice();

		Ice &		operator=( Ice const & rhs );

	private:

		std::string _type;

};

std::ostream &			operator<<( std::ostream & o, Ice const & i );

#endif /* ************************************************************* ICE_H */