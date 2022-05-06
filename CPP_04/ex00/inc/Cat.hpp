#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		virtual ~Cat();

		Cat &		operator=( Cat const & rhs );

		void makeSound() const ;

	private:

};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* ************************************************************* CAT_H */