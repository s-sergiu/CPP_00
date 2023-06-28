
#include "Account.hpp"
#include <iostream>

Account::~Account() 
{
	std::cout<<"destructor"<<std::endl;
}

Account::Account(int initial_deposit) 
{
	(void)initial_deposit;
	std::cout<<"constructor"<<std::endl;
}

void Account::makeDeposit(int deposit)
{
	(void)deposit;
	std::cout<<"make deposit"<<std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	std::cout<<"make withdrawal"<<std::endl;
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
	std::cout<<"display accinfo"<<std::endl;
}
