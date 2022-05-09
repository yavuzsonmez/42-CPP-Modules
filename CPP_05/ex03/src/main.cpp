#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/Intern.hpp"

int main()
{
	try
	{
		Bureaucrat Boss("Boss", 1);
		AForm *newForm;
		Intern Samuel;

		newForm = Samuel.makeForm("shrubbery", "Olivier");
		newForm->beSigned(Boss);
		newForm->execute(Boss);
		delete(newForm);
		newForm = Samuel.makeForm("doesn't exist", "Olivier");
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
