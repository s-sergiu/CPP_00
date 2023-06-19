
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact 
{
	private:
		std::string		FirstName;
		std::string		LastName;
		std::string		Nickname;
		int				Age;
		std::string		DarkestSecret;
	public:
	void setFirstName(std::string firstname);
	void setLastName(std::string lastname);
	void setNickname(std::string nickname);
	void setAge(char age);
	void setDarkestSecret(std::string secret);
	void getFirstName(int index);
	bool isEmptyFirstName();
};

#endif
