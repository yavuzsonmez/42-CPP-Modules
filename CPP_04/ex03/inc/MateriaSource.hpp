#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : virtual public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:

		AMateria* _inventory[4];
		std::string _name;

};

#endif /* *************************************************** MATERIASOURCE_H */