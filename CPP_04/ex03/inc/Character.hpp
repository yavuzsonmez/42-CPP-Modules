#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : virtual public ICharacter
{


	public:

		Character();
		Character(std::string const & name);
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx) ;
		void use(int idx, ICharacter& target);

	private:

		AMateria* _inventory[4];
		std::string _name;

};

#endif /* ******************************************************* CHARACTER_H */