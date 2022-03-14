#include <iostream>
#include "Contact.hpp"

/*	Constructor */

Contact::Contact(void) {

	std::cout << "Contact constructed" << std::endl;
	this->_first_name = "" ;
	this->_last_name = "" ;
	this->_nickname = "" ;
	this->_phone_number = "" ;
	this->_darkest_secret = "" ;
	return ;
};

/*	Function which creates a new Contact in the Phone Book */

void Contact::NewContact(void) {

	std::cout << "First name:" << std::endl << "> ";
	getline(std::cin, this->_first_name);

	std::cout << "Last Name:" << std::endl << "> ";
	getline(std::cin, this->_last_name);

	std::cout << "Nickname:" << std::endl << "> ";
	getline(std::cin, this->_nickname);

	std::cout << "Phone Number:" << std::endl << "> ";
	getline(std::cin, this->_phone_number);
	for (int i = 0; i < this->_phone_number.length(); i++)
	{
		if (isdigit(this->_phone_number[i]) == false)
		{
			std::cout << "The Phone number should only be composed by digits, enter a new one" << std::endl << "> ";
			getline(std::cin, this->_phone_number);
			i = -1;
			continue ;
		}

	}

	std::cout << "Darkest Secret:" << std::endl << "> ";
	getline(std::cin, this->_darkest_secret);

	return ;

};

std::string Contact::getFirstName(void) const {

	return this->_first_name;

};

std::string Contact::getLastName(void) const {

	return this->_last_name;

};

std::string Contact::getNickname(void) const {

	return this->_nickname;

};

std::string Contact::getNumber(void) const {

	return this->_phone_number;

};

std::string Contact::getSecret(void) const {

	return this->_darkest_secret;

};

/*	Destructor */

Contact::~Contact(void) {

	//std::cout << "Contact destroyed" << std::endl;
	return ;

};
