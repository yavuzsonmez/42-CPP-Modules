#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook {

	public:
		Contact contact[8];

		PhoneBook(void);
		~PhoneBook(void);

		void Display(void);

};

#endif