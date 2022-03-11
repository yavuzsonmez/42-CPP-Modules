#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {

	std::cin >> this->_first_name;
	std::cin >> this->_last_name;
	std::cin >> this->_nickname;
	std::cin >> this->_phone_number;
	std::cin >> this->_darkest_secret;

	return ;
};

Contact::~Contact(void) {

	return ;

};