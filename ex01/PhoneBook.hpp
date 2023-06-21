
#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include "Contact.hpp"
#define SLOTS 3

class PhoneBook 
{
	private:
		Contact	contacts[SLOTS];
	public:
	void	addContact(int index);
	void	getContact();
	void	searchContact();
	void	displayMenu();
};

#endif
