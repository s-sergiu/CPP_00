
#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include "Contact.hpp"
#define SLOTS 8

class PhoneBook 
{
	private:
		Contact	contacts[SLOTS];
		int		index;
	public:
	void	run();
	void	addContact();
	void	searchContact();
	void	parseCommand(std::string *command);
	void	listAllContacts();
	void	displayMenu();
	void	displayContactByIndex();
	void	displayContactByIndexError();
	void	displayContactsHeader();
	void	displayContact(int choice);
	void	displayContactErrorMsg(int choice);
};

#endif
