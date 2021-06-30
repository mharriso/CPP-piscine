#include "Account.hpp"
#include <iostream>

int				Account::_nbAccounts = 0;
int				Account::_totalAmount = 0;
int				Account::_totalNbDeposits = 0;
int				Account::_totalNbWithdrawals = 0;

Account::Account(void) :
				_amount(0),
				_nbDeposits(0),
				_nbWithdrawals(0)
{
	_accountIndex = Account::_nbAccounts;
	//_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	Account::_nbAccounts += 1;
}

Account::Account(int initial_deposit) :
				_amount(initial_deposit),
				_nbDeposits(0),
				_nbWithdrawals(0)
{
	if (initial_deposit < 0)
		_amount = 0;
	_accountIndex = Account::_nbAccounts;
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	Account::_nbAccounts += 1;
	Account::_totalAmount += _amount;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
	Account::_nbAccounts -= 1;
	Account::_totalAmount -= _amount;
}

void			Account::_displayTimestamp(void)
{
	char		timestamp[32];
	time_t		sec;
	struct tm	*ltime;

	sec = time(NULL);
	ltime = localtime(&sec);
	strftime(timestamp, 32, "[%Y%m%d_%H%M%S]", ltime);
	std::cout << timestamp;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " " << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";" << "deposit:";
	if(deposit > 0)
	{
		_amount += deposit;
		_nbDeposits++;
		Account::_totalAmount += deposit;
		Account::_totalNbDeposits += 1;
		std::cout << deposit << ";" << "amount:" << _amount << ";";
		std::cout << "nb_deposit:" << _nbDeposits << std::endl;
	}
	else
		std::cout << "refused" << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";" << "withdrawal:";
	if(withdrawal <= _amount && withdrawal > 0)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		std::cout << withdrawal << ";" << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "refused" << std::endl;
	return (false);
}
