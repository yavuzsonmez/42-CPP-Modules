#include "Harl.hpp"

Harl::Harl(void) {
	std::cout << "Harl created" << std::endl ;
}

Harl::~Harl(void) {
	std::cout << "Harl destroyed" << std::endl ;
}

void Harl::complain(std::string level) {

	std::string	_level[] = {"debug", "info", "warning", "error"};
	unsigned int i;

	for (i = 0; i < level.length(); i++)
		level[i] = tolower(level[i]);

	for (i = 0; i < 4; i++)
		if (level == _level[i])
			break ;

	switch (i) {

		case 0:
			_debug();
			break ;
		case 1:
			_info();
			break ;
		case 2:
			_warning();
			break ;
		case 3:
			_error();
			break ;
		default:
				std::cout
				<< "[ Probably complaning about insignificant problems ]"
				<< std::endl ;
				break ;
	}
}

void Harl::_debug(void) {
	std::cout
	<< "[ DEBUG ]"
	<< std::endl
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
	<< std::endl
	<< "I really do!"
	<< std::endl
	<< std::endl ;
	_info();
}

void Harl::_info(void) {
	std::cout
	<< "[ INFO ]"
	<< std::endl
	<< "I cannot believe adding extra bacon costs more money."
	<< std::endl
	<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl
	<< std::endl ;
	_warning();
}
void Harl::_warning(void) {
	std::cout
	<< "[ WARNING ]"
	<< std::endl
	<< "I think I deserve to have some extra bacon for free."
	<< std::endl
	<< "I’ve been coming for years whereas you started working here since last month."
	<< std::endl
	<< std::endl ;
	_error();
}

void Harl::_error(void) {
	std::cout
	<< "[ ERROR ]"
	<< std::endl
	<< "This is unacceptable!"
	<< std::endl
	<< "I want to speak to the manager now."
	<< std::endl
	<< std::endl ;
}