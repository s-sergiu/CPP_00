
#include "Contact.hpp"

void Contact::setFirstName(std::string firstname)
{
	FirstName = firstname;
}
void Contact::setLastName(std::string lastname)
{
	LastName = lastname;
}
void Contact::setNickname(std::string nickname)
{
	Nickname = nickname;
}
void Contact::setAge(char age)
{
	Age = age;
}
void Contact::setDarkestSecret(std::string secret)
{
	DarkestSecret = secret;
}
void Contact::getFirstName(int index)
{
	std::cout<<index<<" | "<<FirstName<<" | "<<LastName<<" | "<<Nickname<<std::endl;
}
bool Contact::isEmptyFirstName()
{
	if (FirstName.length() > 0)
		return true;
	else
		return false;
}

