#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include "Contact.hpp"

void DisplayTrunc(std::string str);

class PhoneBook {

	public:
		Contact contact[8];

		PhoneBook(void);
		~PhoneBook(void);

		void DisplayBook(void);
		void DisplayContact(unsigned int i);

};

#endif