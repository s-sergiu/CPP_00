/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 01:00:41 by ssergiu           #+#    #+#             */
/*   Updated: 2023/07/03 01:00:43 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::run(void)
{
	std::string	command;
	
	index = 0;
	system("clear");
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
	{
		system("clear");
		std::cout<<"\e[92mProgram exited sucessfully...\e[0m"<<std::endl;
		exit(EXIT_SUCCESS);
	}
	else
	{
		system("clear");
		std::cout<<"\e[48;5;1m*\e[5mInvalid command:\e[0m ";
		std::cout<<*command;
		std::cout<<std::endl;
	}
}

void	PhoneBook::addContact()
{
	system("clear");
	if (index == SLOTS)
		index = 0;
	contacts[index].createContact();
	system("clear");
	if (!contacts[index].isEmpty())
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
	std::cout<<"\e[1;33m*Check contact index:\e[0m";
	std::cout<<"\e[33m\e[48;5;18m[0 - "<<SLOTS - 1<<"]\e[0m /";
	std::cout<<"\e[1;31m Return to menu \e[0m";
	std::cout<<"\e[33m\e[48;5;18m[-1]\e[0m: ";	
	std::cin>>index;
	if (std::cin.eof())	
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		system("clear");
		return ;
	}
	else if (std::cin.fail())
		displayContactByIndexError();
	else if (index == -1)
	{
		system("clear");
		return ;
	}
	else if (index >= 0 && index < SLOTS)
	{
		if (contacts[index].exists())
		{
			system("clear");
			displayContact(index);
		}
		else
		{			
			system("clear");
			std::cout<<"\e[48;5;1m\e[5mContact empty!\e[0m"<<std::endl;
			searchContact();
		}
	}
	else
		displayContactByIndexError();
}

void	PhoneBook::displayContactByIndexError()
{
	std::cin.clear();
	std::cin.ignore(1000, '\n');
	system("clear");
	std::cout<<"\e[48;5;1m\e[5mWrong index!"<<std::endl;
	std::cout<<"Please type a number between 0 and ";
	std::cout<< SLOTS - 1<<" empty!\e[0m"<<std::endl;
	searchContact();
}

void	PhoneBook::listAllContacts()
{
	int	i;

	i = -1;
	displayContactsHeader();
	while(++i < SLOTS)
		if (contacts[i].exists())
			contacts[i].listContactSummary(i);
} 

void	PhoneBook::displayContactsHeader()
{
	std::cout<<"\e[96m\e[1m\e[4m";
	std::cout<<std::endl;
	std::cout<<"|";
	std::cout<<std::right<<std::setw(10)<<"Index";
	std::cout<<"|";
	std::cout<<std::right<<std::setw(10)<<"First Name";
	std::cout<<"|";
	std::cout<<std::right<<std::setw(10)<<"Last Name";
	std::cout<<"|";
	std::cout<<std::right<<std::setw(10)<<"Nickname";
	std::cout<<"|";
	std::cout<<std::endl;
	std::cout<<"\e[0m";
}

void	PhoneBook::displayContact(int choice) 
{
	contacts[choice].getContactInfo();
	std::cin>>index;
	if (std::cin.eof())
	{
		displayMenu();
		system("clear");
	}
	else if (std::cin.fail())
		displayContactErrorMsg(choice);
	else if (index == 0)
	{
		system("clear");
		searchContact();
	}
	else if (index == 1)
	{
		system("clear");
		return ;
	}
	else
		displayContactErrorMsg(choice);
}

void	PhoneBook::displayContactErrorMsg(int choice)
{
	std::cin.clear();
	std::cin.ignore();
	system("clear");
	std::cout<<"\e[31m\e[5m*Invalid command!\e[0m ";
	std::cout<<std::endl;
	std::cout<<std::endl;
	std::cout<<"\e[92m*Please enter [0] to list contacts again";
	std::cout<<" or [1] to go back to the main menu...\e[0m";
	std::cout<<std::endl;
	std::cout<<std::endl;
	displayContact(choice);
}
