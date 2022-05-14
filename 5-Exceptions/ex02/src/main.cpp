#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat Rob("Rob", 5);
		Bureaucrat Fox("Fox", 46);

		ShrubberyCreationForm a("Home");
		PresidentialPardonForm b("Risitas");
		RobotomyRequestForm c("Wolf");

		a.beSigned(Rob);
		//a.execute(Rob);
		Rob.executeForm(a);

		b.beSigned(Rob);
		b.execute(Rob);

		c.beSigned(Fox);
		c.execute(Fox);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
