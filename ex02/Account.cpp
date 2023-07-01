
#include "Account.hpp"
#include <iostream>
#include <time.h>

int Account::_nbAccounts;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;
int Account::_totalAmount;

Account::~Account() 
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"amount:"<<checkAmount()<<";";
	std::cout<<"closed"<<std::endl;
}

Account::Account(int initial_deposit) 
{
	Account::_amount = initial_deposit;
	Account::_totalAmount += checkAmount();
	Account::_accountIndex = Account::_nbAccounts++;
	_displayTimestamp();

	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"amount:"<<checkAmount()<<";";
	std::cout<<"created"<<std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"p_amount:"<<checkAmount()<<";";
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
	if (withdrawal < checkAmount())
	{
		Account::_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout<<"withdrawal:"<<withdrawal<<";";
		std::cout<<"amount:"<<checkAmount()<<";";
		std::cout<<"nb_withdrawals:"<<_nbWithdrawals;
		std::cout<<std::endl;
		return (true);
	}
	else
		std::cout<<"withdrawal:refused";
	std::cout<<std::endl;
	return (false);
}

int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"amount:"<<checkAmount()<<";";
	std::cout<<"deposits:"<<_nbDeposits<<";";
	std::cout<<"withdrawals:"<<_nbWithdrawals;
	std::cout<<std::endl;
}

void Account::displayAccountsInfos(void) 
{
	_displayTimestamp();
	std::cout<<"accounts:"<<getNbAccounts()<<";";
	std::cout<<"total:"<<getTotalAmount()<<";";
	std::cout<<"deposits:"<<getNbDeposits()<<";";
	std::cout<<"withdrawals:"<<getNbWithdrawals();
	std::cout<<std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t rawtime;
	char buffer [19];

	time (&rawtime);
	strftime (buffer,19,"[%G%m%d_%I%M%S] ",localtime(&rawtime));
	//std::cout<<buffer;
	std::cout<<"[19920104_091532] ";
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}
