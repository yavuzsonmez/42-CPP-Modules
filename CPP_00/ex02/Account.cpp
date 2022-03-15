#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(void) {

}

Account::Account(int initial_deposit) : _amount(initial_deposit) {
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	_nbAccounts += 1;
	_totalAmount += this->_amount;
}

Account::~Account(void) {

}

int Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}
int Account::getTotalAmount(void) {
	return (Account::_totalAmount);
}
int Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}
int Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) {

}

int Account::checkAmount (void) const {

	return (this->_amount);
}

void Account::_displayTimestamp(void) {

}