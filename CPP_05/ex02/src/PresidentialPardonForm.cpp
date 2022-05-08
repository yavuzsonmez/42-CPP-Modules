#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
:AForm::("Presidential", 25, 5), _target("random")
{
	std::cout << "Presidential form created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
:AForm::("Presidential", 25, 5), _target(target)
{
	std::cout << "Presidential form created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
:AForm::(src), _target(src._target)
{
	*this = src;
	std::cout << "Presidential cloned" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
		_target = rhs._target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	checkRequirements();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */