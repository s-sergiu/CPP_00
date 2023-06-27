
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
	{
		system("clear");
		searchContact();
	}
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
	std::cout<<"\e[35m*Check contact index: \e[47m[0 - ";
	std::cout<<SLOTS - 1<<"]\e[0m /";
	std::cout<<"\e[33m Return to menu \e[35m\e[47m[-1]\e[0m: ";	
	std::cin>>index;
	if (std::cin.eof())	
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		system("clear");
		return ;
	}
	else if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		system("clear");
		std::cout<<"\e[31mIndex is not a number"<<std::endl;
		std::cout<<"Please type a number between 0 and ";
		std::cout<< SLOTS - 1<<" empty!\e[0m"<<std::endl;
		searchContact();
	}
	else if (index == -1)
		return ;
	else if (index >= 0 && index < SLOTS)
	{
		if (contacts[index].exists())
			displayContact(index);
		else
		{			
			system("clear");
			std::cout<<"\e[31mContact empty!\e[0m"<<std::endl;
			searchContact();
		}
	}
	else
	{
		system("clear");
		std::cout<<"\e[31mIndex out of bounds!"<<std::endl;
		std::cout<<"Please type a number between 0 and ";
		std::cout<< SLOTS - 1<<" empty!\e[0m"<<std::endl;
		searchContact();
	}
		
}

void	PhoneBook::listAllContacts()
{
	int	i;

	i = -1;
	std::cout<<std::endl;
	std::cout<<"Index | First Name | Last Name | Nickname "<<std::endl;
	while(++i < SLOTS)
		if (contacts[i].exists())
			contacts[i].getFirstName(i);
}

void	PhoneBook::displayContact(int choice)
{
	if (!contacts[choice].exists())
		std::cout<<"Invalid contact index"<<std::endl;
	else
	{
		system("clear");
		contacts[choice].getContactInfo();
		std::cin>>index;
		if (index == 0)
		{
			system("clear");
			searchContact();
		}
		else
			return ;
	}
}
