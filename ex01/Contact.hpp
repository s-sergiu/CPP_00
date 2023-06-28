
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact 
{
	private:
		std::string		FirstName;
		std::string		LastName;
		std::string		Nickname;
		std::string		PhoneNumber;
		std::string		DarkestSecret;
	public:
	void createContact();
	void listContactSummary(int index);
	void getContactInfo();
	bool eraseContact();
	bool isEmpty();
	bool exists();
};

#endif
