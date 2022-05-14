#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string const name, unsigned int grade);
		Bureaucrat( Bureaucrat const & src );
		virtual ~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );
		Bureaucrat &		operator++(void);
		Bureaucrat &		operator--(void);
		Bureaucrat			operator++(int);
		Bureaucrat			operator--(int);

		virtual std::string getName() const;
		virtual unsigned int getGrade() const;

		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};

		void signForm( Form const & form );

	private:

		std::string const _name;
		unsigned int _grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */