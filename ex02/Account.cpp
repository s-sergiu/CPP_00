
#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalAmount = 0;

Account::~Account() 
{
	_displayTimestamp();
	std::cout<<"index:"<<(getNbAccounts() - 1) - (_accountIndex++)<<";";
	std::cout<<"amount:"<<checkAmount()<<";";
	std::cout<<"closed"<<std::endl;
}

Account::Account(int initial_deposit) 
{
	Account::_totalAmount += initial_deposit;
	Account::_amount = initial_deposit;
	Account::_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"amount:"<<initial_deposit<<";";
	std::cout<<"created"<<std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"p_amount:"<<_amount<<";";
	std::cout<<"deposit:"<<deposit<<";";
	Account::_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_amount += deposit;
	std::cout<<"amount:"<<checkAmount()<<";";
	Account::_totalAmount += deposit;
	std::cout<<"nb_deposits:"<<_nbDeposits<<std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"p_amount:"<<checkAmount()<<";";
	if (withdrawal < Account::_amount)
	{
		Account::_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout<<"withdrawal:"<<withdrawal<<";";
		std::cout<<"amount:"<<checkAmount()<<";";
		std::cout<<"nb_withdrawals:"<<_nbWithdrawals;
	}
	else
		std::cout<<"withdrawal:refused";
	std::cout<<std::endl;
	return (true);
}

int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"amount:"<<_amount<<";";
	std::cout<<"deposits:"<<_nbDeposits<<";";
	std::cout<<"withdrawals:"<<_nbWithdrawals;
	std::cout<<std::endl;
}

void Account::displayAccountsInfos(void) 
{
	_displayTimestamp();
	std::cout<<"accounts:"<<getNbAccounts()<<";";
	std::cout<<"total:"<<_totalAmount<<";";
	std::cout<<"deposits:"<<_totalNbDeposits<<";";
	std::cout<<"withdrawals:"<<_totalNbWithdrawals;
	std::cout<<std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::cout<<"[19920104_091532] ";
}

int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

