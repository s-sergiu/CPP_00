
#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include "Contact.hpp"
#define SLOTS 3

class PhoneBook 
{
	private:
		Contact	contacts[SLOTS];
		int		index;
	public:
	void	addContact();
	void	listAllContacts();
	void	searchContact();
	void	displayMenu();
	void	run();
	void	parseCommand(std::string *command);
	void	displayContact(int choice);
};

#endif
