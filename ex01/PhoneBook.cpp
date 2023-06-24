
#include "PhoneBook.hpp"

void PhoneBook::addContact(int index)
{
	std::string word;

	system("clear");
	contacts[index].setFirstName();
	contacts[index].setLastName();
	contacts[index].setNickname();
	contacts[index].setAge();
	contacts[index].setDarkestSecret();
}

void	PhoneBook::getContact()
{
	int	i;

	i = 0;
	while(i < SLOTS)
	{
		if (contacts[i].isEmptyFirstName())
			contacts[i].getFirstName(i);
		i++;
	}
}
void PhoneBook::searchContact()
{
	int	index;

	system("clear");
	std::cout<<std::endl;
	std::cout<<"Index | First Name | Last Name | Nickname "<<std::endl;
	getContact();
	std::cout<<"Ask for index: "<<std::endl;
	std::cin.clear();
	std::cin>>index;
	std::cout<<index;	
	if (index > 0 && index < SLOTS)
		std::cout<<index;	
	else 
		std::cout<<"error";
	std::cout<<std::endl;
	std::cout<<std::endl;
}

void	PhoneBook::displayMenu()
{
	std::cout<<"\e[35m * Phonebook commands: ";
	std::cout<<"\e[32mADD\e[0m, \e[36mSEARCH\e[0m, \e[31mEXIT \e[0m";
	std::cout<<std::endl;
	std::cout<<">: ";
}

Added Thing
Added another Thing
added 3rd thing
added 4th thing
this is a bug
added 6th thing
