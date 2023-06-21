
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	std::string	command;
	PhoneBook	myPhonebook;
	int			index;

	index = 0;
	while (command != "EXIT")
	{
		myPhonebook.displayMenu();
		std::cin>>command;
		for (size_t j = 0; j < command.length(); j++)
			command[j] = (char)toupper(command[j]);
		if (command == "ADD")
		{
			if (index == 3)
				index = 0;
			std::cout<<"index: "<<index<<std::endl;
			myPhonebook.addContact(index);
			index++;
		}
		if (command == "SEARCH")
		{
			system("clear");
			myPhonebook.searchContact();
		}
	}
	return (0);
}
