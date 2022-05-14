#include "../inc/ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()
:AForm::AForm("Shrubbery", 145, 137), _target("random")
{
	std::cout << "Shrubbery form created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
:AForm::AForm("Shrubbery", 145, 137), _target(target)
{
	std::cout << "Shrubbery form created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
:AForm::AForm(src), _target(src._target)
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
	AForm::checkRequirements(executor);

	std::ofstream output(_target + "_shrubbery");
	output << "....0.........0...." << std::endl;
	output << "...000.......000..." << std::endl;
	output << "..00000.....00000.." << std::endl;
	output << ".0000000...0000000." << std::endl;
	output << "...000.......000...";
	output.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */