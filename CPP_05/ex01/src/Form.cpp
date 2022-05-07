#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form():_name("default"), _signed(false), _requiredtoSign(150), _requiredtoExec(150)
{
	std::cout << "Form default created" << std::endl;
}

Form::Form(std::string const name, unsigned int requiredtoSign, unsigned int requiredtoExec)
:_name(name), _signed(false), _requiredtoSign(requiredtoSign), _requiredtoExec(requiredtoExec)
{
	if (requiredtoSign < 1 || requiredtoExec < 1)
		throw GradeTooHighException();
	else if (requiredtoSign > 150 || requiredtoExec > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << name << " created" << std::endl;
}

Form::Form( const Form & src ):_signed(false)
{
	*this = src;
	std::cout << "Form " << src._name << " cloned" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "Form " << _name << " destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		_name = rhs._name;
		_requiredtoSign = rhs._requiredtoSign;
		_requiredtoExec = rhs._requiredtoExec;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form: " << i.getName()
	<< " Signed: " << i.getSigned()
	<< " Required Grade to Sign: " << i.getRequiredToSign()
	<< " Required Grade to Execute: " << i.getRequiredToExec() << std::endl;

	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Form::getName() const
{
	return _name;
}

unsigned int Form::getRequiredToSign() const
{
	return _requiredtoSign;
}

unsigned int Form::getRequiredToExec() const
{
	return _requiredtoExec;
}

bool Form::getSigned() const
{
	return _signed;
}



/* ************************************************************************** */