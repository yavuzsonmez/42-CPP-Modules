# include "../inc/Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	_funct[0] = _shrubbery;
	_funct[1] = _presidential;
	_funct[2] = _robotomy;
	_form[0] = "shrubbery";
	_form[1] = "presidential";
	_form[2] = "robotomy";
	std::cout << "Intern created" << std::endl;
}

Intern::Intern( const Intern & src )
{
	(void)src;
	std::cout << "Intern cloned" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << "Intern destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
		*this = rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm 	*Intern::_shrubbery(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm 	*Intern::_presidential(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

AForm 	*Intern::_robotomy(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

const char* Intern::UnknownFormException::what() const throw()
{
	return ("Form is Unknown !");
}


AForm* Intern::makeForm(std::string form, std::string target)
{

	AForm* newform;

	for (int i = 0; i < 3; i++)
	{
		if (form == _form[i])
		{
			newform = (_funct[i])(target);
			std::cout << "Intern creates " << *newform << std::endl;
			return (newform);
		}
	}
	throw UnknownFormException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */