#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	std::string cmd;
	unsigned int i = 0;

	std::cin >> cmd;
	while (true)
	{
		if (cmd == "ADD")
		{
			book[i] = Contact ;
			i++;
			if (i == 8)
				i = 0;
		}
		else if (cmd == "SEARCH")
		{

			std::cout << "SEARCH WORKS";
		}
		else if (cmd == "EXIT")
		{

			std::cout << "EXIT WORKS";
		}
		else
		{
			return (1);
		}
	}
	return 0;
}