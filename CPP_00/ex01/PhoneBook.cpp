#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

/*	Constructor */

PhoneBook::PhoneBook(void) {

	std::cout << "Phone Book constructed" << std::endl;
	return ;

};

void DisplayTrunc(std::string str) {

	if (str == "")
	{
		std::cout << "|          |";
		return ;
	}
	std::string truncStr;
	unsigned int length;

	truncStr = str.substr(0, 10);
	length = truncStr.length();

	if (length == 10)
		truncStr[9] = '.';

	while (length < 10)
	{
		std::cout << " ";
		length++;
	}
	std::cout << truncStr << "|";
};

/*	Display the entire Phone Book */

void PhoneBook::DisplayBook(void) {

	unsigned int d = 0;

	for (unsigned int i = 0; i < 8; i++)
	{
		if (this->contact[i]._first_name != "" || this->contact[i]._last_name != "" || this->contact[i]._nickname != "")
		{
			if (d == 0)
				std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "|         " << std::to_string(i + 1) << "|";
			DisplayTrunc(this->contact[i]._first_name);
			DisplayTrunc(this->contact[i]._last_name);
			DisplayTrunc(this->contact[i]._nickname);
			std::cout << std::endl;
			d++;
		}
		if (d == 0 && i == 7)
			std::cout << "No contact in the Phone Book.." << std::endl;
	};

	return ;

};

/*	Display the chosen Contact in the Phone Book */

void PhoneBook::DisplayContact(unsigned int i) {

	if (this->contact[i]._first_name == ""
			&& this->contact[i]._last_name == ""
			&& this->contact[i]._nickname == ""
			&& this->contact[i]._phone_number == ""
			&& this->contact[i]._darkest_secret == "")
	{
		std::cout << "No contact there.." << std::endl;
		return ;
	}
	std::cout << "[First Name] - " << this->contact[i]._first_name << std::endl;
	std::cout << "[Last Name] - " << this->contact[i]._last_name << std::endl;
	std::cout << "[Nickname] - " << this->contact[i]._nickname << std::endl;
	std::cout << "[Number] - " << this->contact[i]._phone_number << std::endl;
	std::cout << "[Secret] - " << this->contact[i]._darkest_secret << std::endl;
	return ;

};

/*	Destructor */

PhoneBook::~PhoneBook(void) {

	std::cout << "Phone Book destroyed" << std::endl;
	return ;

};
