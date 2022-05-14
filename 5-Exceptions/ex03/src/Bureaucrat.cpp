#include "../inc/Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat():_name("default"), _grade(150)
{
	std::cout << "Bureaucrat default created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade):_name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
	std::cout << "Bureaucrat " << name << " created" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ):_name(src._name)
{
	*this = src;
	std::cout << "Bureaucrat " << src._name << " cloned" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << _name << " destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
		_grade = rhs._grade;
	return *this;
}

Bureaucrat &		Bureaucrat::operator++(void)
{
	if (_grade == 1)
		throw GradeTooHighException();
	--_grade;
	return *this;
}

Bureaucrat &		Bureaucrat::operator--(void)
{
	if (_grade == 150)
		throw GradeTooLowException();
	++_grade;
	return *this;
}

Bureaucrat			Bureaucrat::operator++(int)
{
	if (_grade == 1)
		throw GradeTooHighException();
	Bureaucrat tmp(*this);
	--_grade;
	return tmp;
}

Bureaucrat			Bureaucrat::operator--(int)
{
	if (_grade == 150)
		throw GradeTooLowException();
	Bureaucrat tmp(*this);
	++_grade;
	return tmp;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << " ";
	return (o);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too High !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low !");
}

void Bureaucrat::signForm( AForm const & form )
{
	if (_grade <= form.getRequiredToSign())
		std::cout << *this << "signed " << form << std::endl;
	else
		std::cout << *this << "couldn't sign " << form << "because his grade is to Low." << std::endl;
}

void Bureaucrat::executeForm( AForm const & form )
{
if (_grade <= form.getRequiredToExec() && form.getSigned() == true)
{
		std::cout << *this << "executed " << form << std::endl;
		form.execute(*this);
}
	else
	{
		if (_grade > form.getRequiredToExec())
			std::cout << *this << "couldn't execute " << form << "because his grade is to Low." << std::endl;
		else
			std::cout << *this << "couldn't execute " << form << "because the form is not Signed." << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


std::string Bureaucrat::getName() const
{
	return (_name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (_grade);
}



/* ************************************************************************** */