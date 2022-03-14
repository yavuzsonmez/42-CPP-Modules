#ifndef CONTACT_H
# define CONTACT_H

class Contact {

	public:
		Contact(void);
		~Contact(void);

		void NewContact(void);
		std::string getFirstName(void) const ;
		std::string getLastName(void) const ;
		std::string getNickname(void) const ;
		std::string getNumber(void) const ;
		std::string getSecret(void) const ;

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif