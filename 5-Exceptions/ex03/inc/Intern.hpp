#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		AForm* makeForm(std::string form, std::string target);

		class UnknownFormException: public std::exception
		{
			virtual const char* what() const throw();
		};

	private:

		std::string			_form[3];
		AForm*				(*_funct[3])(std::string const &target);

		static AForm*		_shrubbery(std::string const &target);
		static AForm*		_presidential(std::string const &target);
		static AForm*		_robotomy(std::string const &target);

};

#endif /* ********************************************************** INTERN_H */