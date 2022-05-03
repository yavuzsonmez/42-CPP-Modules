#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>

class Cure : virtual public AMetaria
{

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		Cure &		operator=( Cure const & rhs );

	private:

		std::string _type;

};

std::ostream &			operator<<( std::ostream & o, Cure const & i );

#endif /* ************************************************************ CURE_H */