#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook phone_book;
	std::string cmd;
	unsigned int i = 0;

	std::cout << "Welcome to the Phone Book ! Enter a command.." << std::endl << "ADD - SEARCH - EXIT" << std::endl;
	std::cout << "____________________" << std::endl << "> ";
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
			phone_book.DisplayBook();
			std::cout << "Which contact index are you looking for (1-8)" << std::endl << "> ";
			std::cin >> cmd;
			i = stoi(cmd) - 1;
			if (i >= 0 && i <= 7)
				phone_book.DisplayContact(i);
			else
				std::cout << "Wrong index" << std::endl;
		}
		else if (cmd == "EXIT")
		{
			std::cout << "Leaving the Phone Book.. Bye" << std::endl;
			return (0);
		}
		else
			std::cout << "Wrong Command" << std::endl;
		std::cout << "____________________" << std::endl << "> ";
		std::cout << "Enter a command (ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> cmd;
	}
	return (0);
}