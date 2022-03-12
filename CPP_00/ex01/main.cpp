#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook phone_book;
	std::string cmd;
	unsigned int i = 0;

	std::cout << "Welcome to the Phone Book ! Enter one of the command below" << std::endl << "-> ADD - SEARCH - EXIT <-" << std::endl << "> ";
	std::cin >> cmd;
	while (true)
	{
		if (cmd == "ADD")
		{
			phone_book.contact[i].NewContact();
			i++;
			if (i == 8)
				i = 0;
		}
		else if (cmd == "SEARCH")
		{
			phone_book.Display();
			return (0);
		}
		else if (cmd == "EXIT")
		{
			std::cout << "Leaving the Phone Book.. Bye" << std::endl;
			return (0);
		}
		else
		{
			std::cout << "Wrong Command" << std::endl;
			return (1);
		}
		std::cout << "Enter a command (ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> cmd;
	}
	return 0;
}