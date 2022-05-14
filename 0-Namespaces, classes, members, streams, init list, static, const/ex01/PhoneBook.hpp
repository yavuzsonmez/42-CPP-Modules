#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook {

	public:

		PhoneBook(void);
		~PhoneBook(void);

		bool DisplayBook(void);
		void DisplayContact(unsigned int i);
		void DisplayTrunc(std::string str);
		Contact *getContact(unsigned int i);

	private:
		Contact contact[8];
};

#endif