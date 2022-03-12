#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

class PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);

	private:
		Contact book[8];
};

#endif