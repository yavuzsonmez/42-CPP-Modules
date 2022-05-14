#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

/*	Constructor */

PhoneBook::PhoneBook(void) {

	//std::cout << "Phone Book constructed" << std::endl;
	return ;

};

Contact *PhoneBook::getContact(unsigned int i) {

	return &this->contact[i];
}

void PhoneBook::DisplayTrunc(std::string str) {

	if (str == "")
		return ;
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

bool PhoneBook::DisplayBook(void) {

	unsigned int d = 0;

	for (unsigned int i = 0; i < 8; i++)
	{
		if (getContact(i)->getFirstName() != "" || getContact(i)->getLastName() != "" || getContact(i)->getNickname() != "")
		{
			if (d == 0)
			{
				std::cout << ".___________________________________________." << std::endl;
				std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
				std::cout << "|__________|__________|__________|__________|" << std::endl;
			}
			std::cout << "|         " << std::to_string(i + 1) << "|";
			DisplayTrunc(getContact(i)->getFirstName());
			DisplayTrunc(getContact(i)->getLastName());
			DisplayTrunc(getContact(i)->getNickname());
			std::cout << std::endl;
			std::cout << "|__________|__________|__________|__________|" << std::endl;
			d++;
		}
		if (d == 0 && i == 7)
		{
			std::cout << "No contact in the Phone Book.." << std::endl;
			return false ;
		}
	};

	return true;

};

/*	Display the chosen Contact in the Phone Book */

void PhoneBook::DisplayContact(unsigned int i) {

	if (getContact(i)->getFirstName() == ""
			&& getContact(i)->getLastName() == ""
			&& getContact(i)->getNickname() == ""
			&& getContact(i)->getNumber() == ""
			&& getContact(i)->getSecret() == "")
	{
		std::cout << "No contact there.." << std::endl;
		return ;
	}
	std::cout << "[First Name] - " << getContact(i)->getFirstName() << std::endl;
	std::cout << "[Last Name] - " << getContact(i)->getLastName() << std::endl;
	std::cout << "[Nickname] - " << getContact(i)->getNickname() << std::endl;
	std::cout << "[Number] - " << getContact(i)->getNumber() << std::endl;
	std::cout << "[Secret] - " << getContact(i)->getSecret() << std::endl;
	return ;

};

/*	Destructor */

PhoneBook::~PhoneBook(void) {

	//std::cout << "Phone Book destroyed" << std::endl;
	return ;

};
