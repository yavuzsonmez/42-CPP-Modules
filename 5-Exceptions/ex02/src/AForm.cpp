#include "../inc/AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm():_name("default"), _signed(false), _requiredtoSign(150), _requiredtoExec(150)
{
	std::cout << "Form default created" << std::endl;
}

AForm::AForm(std::string const name, unsigned int requiredtoSign, unsigned int requiredtoExec)
:_name(name), _signed(false), _requiredtoSign(requiredtoSign), _requiredtoExec(requiredtoExec)
{
	if (requiredtoSign < 1 || requiredtoExec < 1)
		throw GradeTooHighException();
	else if (requiredtoSign > 150 || requiredtoExec > 150)
		throw GradeTooLowException();
	std::cout << "Form " << name << " created" << std::endl;
}

AForm::AForm( const AForm & src )
:_name(src._name), _signed(false), _requiredtoSign(src._requiredtoSign), _requiredtoExec(src._requiredtoExec)
{
	*this = src;
	std::cout << "Form " << src._name << " cloned" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
	std::cout << "Form " << _name << " destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << "Form name: " << i.getName()
	<< " (is Signed: " << i.getSigned()
	<< " Required Grade to Sign: " << i.getRequiredToSign()
	<< " Required Grade to Execute: " << i.getRequiredToExec() << "). ";

	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too High !");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low !");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("The Form is not Signed!");
}

void AForm::beSigned( Bureaucrat & signer )
{
	signer.signForm(*this);
	if (signer.getGrade() > _requiredtoSign)
		throw GradeTooLowException();
	_signed = true;
}

void AForm::checkRequirements( Bureaucrat const & executor ) const
{
	if (_signed == false)
		throw FormNotSignedException();
	if (executor.getGrade() > _requiredtoExec)
		throw GradeTooLowException();
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string AForm::getName() const
{
	return _name;
}

unsigned int AForm::getRequiredToSign() const
{
	return _requiredtoSign;
}

unsigned int AForm::getRequiredToExec() const
{
	return _requiredtoExec;
}

bool AForm::getSigned() const
{
	return _signed;
}



/* ************************************************************************** */