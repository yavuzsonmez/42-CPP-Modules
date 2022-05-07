#include "../inc/Bureaucrat.hpp"

int main()
{
	std::cout << "_________________________________________" << std::endl;
	{
		try { Bureaucrat("Rob", 0); }
		catch (const std::exception& e) { std::cerr << e.what() << std::endl; }
	}
	std::cout << "_________________________________________" << std::endl;
	{
		try { Bureaucrat("Mario", 151); }
		catch (const std::exception& e) { std::cerr << e.what() << std::endl; }
	}
	std::cout << "_________________________________________" << std::endl;
	{
		try {
			Bureaucrat Luigi = Bureaucrat("Luigi", 2);
			std::cout << Luigi << std::endl;
			++Luigi;
			std::cout << Luigi << std::endl;
			++Luigi;
			std::cout << Luigi << std::endl;
		}
		catch (const std::exception& e) { std::cerr << e.what() << std::endl; }
	}
	std::cout << "_________________________________________" << std::endl;
	return (0);
}
