#include <iostream>
#include "Contact.hpp"

/*	Constructor */

Contact::Contact(void) {

	std::cout << "Contact constructed" << std::endl;
	return ;
};

/*	Function which creates a new Contact in the Phone Book */

void Contact::NewContact(void) {


	std::cout << "First name:" << std::endl << "> ";
	std::cin >> this->_first_name;

	std::cout << "Last Name:" << std::endl << "> ";
	std::cin >> this->_last_name;

	std::cout << "Nickname:" << std::endl << "> ";
	std::cin >> this->_nickname;

	std::cout << "Phone Number:" << std::endl << "> ";
	std::cin >> this->_phone_number;

	std::cout << "Darkest Secret:" << std::endl << "> ";
	std::cin >> this->_darkest_secret;

	return ;

};

/*	Destructor */

Contact::~Contact(void) {

	std::cout << "Contact destroyed" << std::endl;
	return ;

};
