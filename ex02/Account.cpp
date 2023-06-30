
#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::~Account() 
{
	std::cout<<"destructor"<<std::endl;
}

int Account::_nbAccounts;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;
int Account::_totalAmount;

Account::Account(int initial_deposit) 
{
	static int	counter;
	Account::_nbDeposits = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	std::cout<<"[19920104_091532] "<<"index:"<<counter++<<";";
	std::cout<<"amount:"<<initial_deposit<<";";
	std::cout<<"created"<<std::endl;
}

void Account::makeDeposit(int deposit)
{
	std::cout<<"make deposit"<<deposit<<std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_nbWithdrawals = withdrawal;
	std::cout<<"make withdrawal"<<withdrawal<<std::endl;
	return (true);
}

int Account::checkAmount(void) const
{
	std::cout<<"check amount"<<std::endl;
	return (0);
}

void Account::displayStatus(void) const
{
	std::cout<<"display status"<<std::endl;
}

void Account::displayAccountsInfos(void) 
{
	std::cout<<"[19920104_091532] ";
	std::cout<<"accounts:"<<_nbAccounts<<";";
	std::cout<<"total:"<<_totalAmount<<";";
	std::cout<<"deposits:"<<_totalNbDeposits<<";";
	std::cout<<"withdrawals:"<<_totalNbWithdrawals;
	std::cout<<std::endl;
}

