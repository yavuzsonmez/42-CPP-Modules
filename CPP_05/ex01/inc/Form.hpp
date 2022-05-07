#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

class Form : virtual public Bureaucrat
{

	public:

		Form();
		Form(std::string const name, unsigned int requiredtoSign, unsigned int requiredtoExec);
		Form( Form const & src );
		virtual ~Form();

		Form &		operator=( Form const & rhs );

		virtual std::string getName() const;
		virtual unsigned int getRequiredToSign() const;
		virtual unsigned int getRequiredToExec() const;
		virtual bool getSigned() const;

	private:

		std::string const _name;
		bool _signed;
		unsigned int const _requiredtoSign;
		unsigned int const _requiredtoExec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */