#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main()
{
	try
	{
		Bureaucrat Rob("Rob", 5);
		Form Visa("Visa", 18, 18);
		Form Visa2(Visa);
		Form Permit("Permit", 3, 3);

		Visa.beSigned(Rob);
		Visa2.beSigned(Rob);
		Permit.beSigned(Rob);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
