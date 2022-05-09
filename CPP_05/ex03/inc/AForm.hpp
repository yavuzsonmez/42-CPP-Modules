#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

	public:

		AForm();
		AForm(std::string const name, unsigned int requiredtoSign, unsigned int requiredtoExec);
		AForm( AForm const & src );
		virtual ~AForm();

		AForm &		operator=( AForm const & rhs );

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
		class FormNotSignedException: public std::exception
		{
			virtual const char* what() const throw();
		};

		void beSigned( Bureaucrat & signer );
		void checkRequirements(Bureaucrat const & executor) const;
		virtual void execute(Bureaucrat const & executor) const = 0;

	private:

		std::string const _name;
		bool _signed;
		unsigned int const _requiredtoSign;
		unsigned int const _requiredtoExec;

};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ AForm_H */