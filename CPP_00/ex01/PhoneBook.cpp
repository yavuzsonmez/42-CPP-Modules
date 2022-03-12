#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

/*	Constructor */

PhoneBook::PhoneBook(void) {

	std::cout << "Phone Book initialized" << std::endl;
	return ;

};

void PhoneBook::Display(void) {

	for (unsigned int i = 0; i < 8; i++)
	{
		std::cout << this->contact[i]._first_name << std::endl;
	}

	return ;

};

/*	Destructor */

PhoneBook::~PhoneBook(void) {

	std::cout << "Phone Book destroyed" << std::endl;
	return ;

};
