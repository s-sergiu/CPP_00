
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	std::string	command;
	PhoneBook	myPhonebook;
	int			index;

	index = 0;
	while (true)
	{
		system("clear");
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
		else if (command == "SEARCH")
		{
			system("clear");
			myPhonebook.searchContact();
		}
		else if (command == "EXIT")
			break ;
		std::cout<<"Invalid input! "<<std::endl;
	}
	return (0);
}
