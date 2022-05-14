#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form();
		Form(std::string const name, unsigned int requiredtoSign, unsigned int requiredtoExec);
		Form( Form const & src );
		virtual ~Form();

		Form &		operator=( Form const & rhs );

		std::string getName() const;
		unsigned int getRequiredToSign() const;
		unsigned int getRequiredToExec() const;
		bool getSigned() const;

		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};

		void beSigned( Bureaucrat & signer );

	private:

		std::string const _name;
		bool _signed;
		unsigned int const _requiredtoSign;
		unsigned int const _requiredtoExec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */