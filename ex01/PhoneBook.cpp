
#include "PhoneBook.hpp"

void	PhoneBook::run(void)
{
	std::string	command;
	
	index = 0;
	while (true)
	{
		displayMenu();
		parseCommand(&command);
		std::cin.clear();
		clearerr(stdin);
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

void	PhoneBook::parseCommand(std::string *command)
{
	std::cin>>*command;

	if (!(*command).compare("ADD"))
		addContact();
	else if (!(*command).compare("SEARCH"))
		searchContact();
	else if (!(*command).compare("EXIT"))
		exit(EXIT_SUCCESS);
}

void	PhoneBook::addContact()
{
	system("clear");
	if (index == SLOTS)
		index = 0;
	contacts[index].createContact();
	contacts[index].checkIfEmpty();
	index++;
}

void	PhoneBook::searchContact()
{
	listAllContacts();
	displayContactByIndex();
}

void	PhoneBook::displayContactByIndex()
{
	int	index;

	std::cout<<std::endl;
	std::cout<<"Ask for index: "<<std::endl;
	std::cin>>index;
	if (index >= 0 && index < SLOTS)
		displayContact(index);
}

void	PhoneBook::listAllContacts()
{
	int	i;

	i = -1;
	system("clear");
	std::cout<<std::endl;
	std::cout<<"Index | First Name | Last Name | Nickname "<<std::endl;
	while(++i < SLOTS)
		if (contacts[i].exists())
			contacts[i].getFirstName(i);
}

void	PhoneBook::displayContact(int choice)
{
	system("clear");
	if (!contacts[choice].exists())
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
