#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : virtual public AAnimal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		Dog &		operator=( Dog const & rhs );

		void makeSound() const ;

	private:

		Brain* _brain;

};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */