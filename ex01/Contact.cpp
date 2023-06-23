
#include "Contact.hpp"

void Contact::setFirstName()
{
	std::cout<<"\e[32m Enter first name: \e[0m";
	std::cin>>FirstName;
}
void Contact::setLastName()
{
	std::cout<<"\e[32m Enter last name: \e[0m";
	std::cin>>LastName;
}
void Contact::setNickname()
{
	std::cout<<"\e[32m Enter nickname: \e[0m";
	std::cin>>Nickname;
}
void Contact::setAge()
{
	std::cout<<"\e[32m Enter age: \e[0m";
	std::cin>>Age;
}
void Contact::setDarkestSecret()
{
	std::cout<<"\e[32m Enter darkest secret: \e[0m";
	std::cin>>DarkestSecret;
}
void Contact::getFirstName(int index)
{
	std::cout<<index<<" | "<<FirstName<<" | "<<LastName<<" | "<<Nickname<<" | "<<Age<<std::endl;
}
bool Contact::isEmptyFirstName()
{
	if (FirstName.length() > 0)
		return true;
	else
		return false;
}

