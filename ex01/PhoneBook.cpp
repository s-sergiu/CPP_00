
#include "PhoneBook.hpp"

void PhoneBook::parseCommand(std::string *command)
{
	std::cin>>*command;

	if (!(*command).compare("ADD"))
		addContact();
	else if (!(*command).compare("SEARCH"))
		searchContact();
	else if (!(*command).compare("EXIT"))
		exit(EXIT_SUCCESS);
}

void PhoneBook::run(void)
{
	std::string	command;
	
	index = 0;
	while (true)
	{
		displayMenu();
		parseCommand(&command);
		clearerr(stdin);
		std::cin.clear();
	}
}

void PhoneBook::addContact()
{
	std::string word;

	system("clear");
	if (index == SLOTS)
		index = 0;
	contacts[index].createContact();
	index++;
}

void	PhoneBook::listAllContacts()
{
	int	i;

	i = 0;
	system("clear");
	std::cout<<std::endl;
	std::cout<<"Index | First Name | Last Name | Nickname "<<std::endl;
	while(i < SLOTS)
	{
		if (!contacts[i].isEmptyFirstName())
			contacts[i].getFirstName(i);
		i++;
	}
}
void PhoneBook::searchContact()
{
	int	index;

	listAllContacts();
	std::cout<<std::endl;
	std::cout<<"Ask for index: "<<std::endl;
	std::cin.clear();
	std::cin>>index;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		return ;
	}
	if (index >= 0 && index < SLOTS)
	{
		displayContact(index);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			return ;
		}
	}
}

void	PhoneBook::displayContact(int choice)
{
	system("clear");
	if (contacts[choice].isEmptyFirstName())
		std::cout<<"Invalid contact index"<<std::endl;
	else
	{
		contacts[choice].getContactInfo();
		std::cin>>index;
		if (index == 0)
			searchContact();
		else
			return ;
	}
}

void	PhoneBook::displayMenu()
{
	system("clear");
	std::cout<<"\e[45m                                        \e[0m";
	std::cout<<std::endl;
	std::cout<<"\e[1;33m* Phonebook commands: ";
	std::cout<<"\e[32mADD\e[0m, \e[36mSEARCH\e[0m, \e[31mEXIT \e[0m";
	std::cout<<std::endl;
	std::cout<<"\e[45m                                        \e[0m";
	std::cout<<std::endl;
	std::cout<<"\e[40m\e[32m>:\e[0m ";
}
