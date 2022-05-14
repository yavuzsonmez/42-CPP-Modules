#include <iostream>
#include <string>
#include <sstream>
#include "PhoneBook.hpp"
#include "Contact.hpp"


int ft_stoi(std::string s)
{
	int i;
	std::istringstream(s) >> i;
	return (i);
}

int main(void)
{
	PhoneBook phone_book;
	std::string cmd;
	unsigned int i = 0;
	unsigned int book_index = 0;

	std::cout << "Welcome to the Phone Book ! Enter a command.." << std::endl << "ADD - SEARCH - EXIT" << std::endl;
	std::cout << "____________________" << std::endl << "> ";
	getline(std::cin, cmd);
	while (true)
	{
		if (cmd == "ADD" || cmd == "add")
		{
			phone_book.getContact(i)->NewContact();
			i++;
			if (i == 8)
				i = 0;
		}
		else if (cmd == "SEARCH" || cmd == "search")
		{
			if (phone_book.DisplayBook() == false)
			{
				std::cout << "____________________" << std::endl << "> ";
				std::cout << "Enter a command (ADD, SEARCH, EXIT)" << std::endl;
				getline(std::cin, cmd);
				continue ;

			}
			std::cout << "Which contact index are you looking for (1-8)" << std::endl << "> ";
			getline(std::cin, cmd);
			book_index = ft_stoi(cmd) - 1;
			if (book_index >= 0 && book_index <= 7)
				phone_book.DisplayContact(book_index);
			else
				std::cout << "Wrong index" << std::endl;
		}
		else if (cmd == "EXIT" || cmd == "exit")
		{
			std::cout << "Leaving the Phone Book.. Bye" << std::endl;
			return (0);
		}
		else
			std::cout << "Wrong Command" << std::endl;
		std::cout << "____________________" << std::endl << "> ";
		std::cout << "Enter a command (ADD, SEARCH, EXIT)" << std::endl;
		getline(std::cin, cmd);
	}
	return (0);
}