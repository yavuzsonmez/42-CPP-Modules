#include "Account.hpp"
#include <iostream>
#include <iomanip>

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
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount <<";closed" << std::endl;
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

void	Account::makeDeposit( int deposit ) {

	int ex_amount = this->_amount;

	_displayTimestamp();
	if (deposit >= 0)
	{
		this->_amount += deposit;
		this->_nbDeposits += 1;
		_totalNbDeposits += 1;
		_totalAmount += deposit;
		std::cout << " index:" << this->_accountIndex
		<< ";p_amount:" << ex_amount
		<< ";deposit:" << deposit
		<< ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits
		<< std::endl;
	}
	else
		std::cout << "Error" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int		ex_amount = this->_amount;

	if (withdrawal >= 0)
	{
		_displayTimestamp();
		if (_amount - withdrawal >= 0)
		{
			this->_amount -= withdrawal;
			this->_nbWithdrawals += 1;
			_totalNbWithdrawals += 1;
			_totalAmount -= withdrawal;

			std::cout << " index:" << this->_accountIndex
			<< ";p_amount:" << ex_amount
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbWithdrawals
			<< std::endl;
		}
		else
		{
			std::cout << " index:" << this->_accountIndex << ";p_amount:" << ex_amount << ";withdrawal:refused" << std::endl;
			return false;
		}
	}
	else
	{
		std::cout << "Error" << std::endl;
		return false;
	}
	return true;
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts
	<< ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals
	<< std::endl;
}

int Account::checkAmount (void) const {

	return (this->_amount);
}

void	Account::_displayTimestamp( void ){
	time_t calendar_time = time(NULL);
	struct tm *timestamp = localtime(&calendar_time);

	std::cout << '[' << timestamp->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << timestamp->tm_mon + 1;
	std::cout << std::setw(2) << std::setfill('0') << timestamp->tm_mday;
	std::cout << '_';
	std::cout << std::setw(2) << std::setfill('0') << timestamp->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << timestamp->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << timestamp->tm_sec;
	std::cout << ']';
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals
	<< std::endl;
}