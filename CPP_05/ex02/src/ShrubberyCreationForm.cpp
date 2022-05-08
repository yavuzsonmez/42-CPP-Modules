#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()
:AForm::("Shrubbery", 145, 137), _target("random")
{
	std::cout << "Shrubbery form created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
:AForm::("Shrubbery", 145, 137), _target(target)
{
	std::cout << "Shrubbery form created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
:AForm::(src), _target(src._target)
{
	*this = src;
	std::cout << "Shrubbery cloned" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
		_target = rhs._target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	ofstream Target(_target + "_shrubbery");
	Target << "ASCII Tree";
	Target.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */