#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {

	std::string init = "";

	this->_first_name << init;
	this->_last_name << init;
	this->_nickname << init;
	this->_phone_number << init;
	this->_darkest_secret << init;

	return ;
};

Contact::~Contact(void) {

	return ;

};