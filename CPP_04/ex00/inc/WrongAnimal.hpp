#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );

		std::string getType() const ;

		virtual void makeSound() const;

	protected:

		std::string type;

	private:

};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif /* ********************************************************** WrongAnimal_H */