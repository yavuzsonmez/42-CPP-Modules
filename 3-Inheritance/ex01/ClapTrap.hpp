#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs );

		std::string getName() const;
		unsigned int getHit() const;
		unsigned int getEnergy() const;
		unsigned int getAttack() const;

		void setName(std::string name);
		void setHit(unsigned int hit);
		void setEnergy(unsigned int energy);
		void setAttack(unsigned int attack);

		void attack( std::string const & target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

	private:

		std::string _name;
		unsigned int _hit;
		unsigned int _energy;
		unsigned int _attack;

};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */