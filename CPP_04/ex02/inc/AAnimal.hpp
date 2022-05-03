#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal
{

	public:

		AAnimal();
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();

		AAnimal &		operator=( AAnimal const & rhs );

		std::string getType() const ;

		virtual void makeSound() const = 0;

	protected:

		std::string type;

	private:

};

std::ostream &			operator<<( std::ostream & o, AAnimal const & i );

#endif /* ********************************************************** ANIMAL_H */