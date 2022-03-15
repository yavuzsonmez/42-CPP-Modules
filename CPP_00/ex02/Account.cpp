t::_nbts = 0;
t::_totalAmount = 0;
t::_totalNbDeposits = 0;
t::_totalNbWithdrawals = 0;


t::t(void) {

}

t::~t(void) {

}

int t::getNbts(void) {
	return (t::_nbts);
}
int t::getTotalAmount(void) {
	return (t::_totalAmount);
}
int t::getNbDeposits(void) {
	return (t::_totalNbDeposits);
}
int t::getNbWithdrawals(void) {
	return (t::_totalNbWithdrawals);
}

void t::displaytsInfos(void) {

}

int t::checkAmount (void) const {

	return (this->_amount);
}

void t::_displayTimestamp(void) {
	
}