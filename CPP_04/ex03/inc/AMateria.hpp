#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{

	public:

		AMateria();
		AMateria(std::string const & type);
		AMateria( AMateria const & src );
		~AMateria();

		AMateria &		operator=( AMateria const & rhs );

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:

		std::string type;

	private:

};

#endif /* ******************************************************** AMATERIA_H */