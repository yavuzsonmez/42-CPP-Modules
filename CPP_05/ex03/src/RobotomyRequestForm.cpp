#include "../inc/RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
:AForm::AForm("Robotomy", 72, 45), _target("random")
{
	std::cout << "Robotomy form created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
:AForm::AForm("Robotomy", 72, 45), _target(target)
{
	std::cout << "Robotomy form created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
:AForm::AForm(src), _target(src._target)
{
	*this = src;
	std::cout << "Robotomy cloned" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
		_target = rhs._target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	AForm::checkRequirements(executor);

	unsigned int random;
	std::cout << "Makes some drilling noises." << std::endl;
	random = rand() % 2;
	if (random == 1)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotomy failed." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */