#ifndef WrongCat_HPP
# define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		~WrongCat();

		WrongCat &		operator=( WrongCat const & rhs );

		void makeSound() const ;

	private:

};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif /* ************************************************************* WrongCat_H */