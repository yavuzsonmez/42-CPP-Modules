#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {

	return ;
};

void Contact::NewContact(void) {

	std::cout << "First name:" << std::endl;
	std::cout << "> ";
		std::cin >> this->_first_name;

	std::cout << "Last Name:" << std::endl;
	std::cout << "> ";
		std::cin >> this->_last_name;

	std::cout << "Nickname:" << std::endl;
	std::cout << "> ";
		std::cin >> this->_nickname;

	std::cout << "Phone Number:" << std::endl;
	std::cout << "> ";
		std::cin >> this->_phone_number;

	std::cout << "Darkest Secret:" << std::endl;
	std::cout << "> ";
		std::cin >> this->_darkest_secret;
	return ;

};

Contact::~Contact(void) {

	return ;

};
