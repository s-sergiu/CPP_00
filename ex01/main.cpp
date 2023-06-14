#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	std::string	command;
	PhoneBook	myPhonebook;

	while (command != "EXIT")
	{
		std::cout<<"Phonebook commands - ADD, SEARCH, EXIT"<<std::endl;
		std::cin>>command;
		for (size_t j = 0; j < command.length(); j++)
			command[j] = (char)toupper(command[j]);
		if (command == "ADD")
		{
			myPhonebook.addContact();
		}
		if (command == "SEARCH")
		{
			myPhonebook.searchContact();
		}
	}
	return (0);
}
