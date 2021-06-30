#include "Account.hpp"
#include <iostream>

Account::Account(void) :
				_amount(0),
				_nbDeposits(0),
				_nbWithdrawals(0)
{
	_accountIndex = this->_nbAccounts;
	//_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	this->_nbAccounts += 1;
}

Account::Account(int initial_deposit) :
				_amount(initial_deposit),
				_nbDeposits(0),
				_nbWithdrawals(0)
{
	if (initial_deposit < 0)
		_amount = 0;
	_accountIndex = this->_nbAccounts;
	//_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	this->_nbAccounts += 1;
	this->_totalAmount += _amount;
}

Account::~Account(void)
{
	//_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
	this->_nbAccounts -= 1;
	this->_totalAmount -= _amount;
}
