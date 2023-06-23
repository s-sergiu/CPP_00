
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact 
{
	private:
		std::string		FirstName;
		std::string		LastName;
		std::string		Nickname;
		std::string		Age;
		std::string		DarkestSecret;
	public:
	void setFirstName();
	void setLastName();
	void setNickname();
	void setAge();
	void setDarkestSecret();
	void getFirstName(int index);
	bool isEmptyFirstName();
};

#endif
