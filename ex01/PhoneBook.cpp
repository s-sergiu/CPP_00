
#include "PhoneBook.hpp"

void PhoneBook::addContact(int index)
{
	std::string word;
	char	number;

	system("clear");
	std::cout<<"\e[32m Enter first name: \e[0m";
	std::cin>>word;
	contacts[index].setFirstName(word);
	std::cout<<"\e[32m Enter last name: \e[0m";
	std::cin>>word;
	contacts[index].setLastName(word);
	std::cout<<"\e[32m Enter nickname: \e[0m";
	std::cin>>word;
	contacts[index].setNickname(word);
	std::cout<<"\e[32m Enter age: \e[0m";
	std::cin>>number;
	contacts[index].setAge(number);
	std::cout<<"\e[32m Enter darkest secret: \e[0m";
	std::cin>>word;
	contacts[index].setDarkestSecret(word);
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
	std::cin>>index;
	std::cout<<std::endl;
	std::cout<<std::endl;
}

void	PhoneBook::displayMenu()
{
	std::cout<<"\e[35m Phonebook commands: ";
	std::cout<<"\e[32mADD\e[0m, \e[36mSEARCH\e[0m, \e[31mEXIT \e[0m";
	std::cout<<std::endl;
}
