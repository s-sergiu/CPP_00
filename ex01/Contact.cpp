
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
	int age;
	std::cout<<"\e[32m Enter age: \e[0m";
	std::cin>>age;
	if (std::cin.fail())
	{
		std::cout<<"\e[32m Please enter a valid number! \e[0m";
		std::cout<<std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
	}
	Age = age;
}
void Contact::setDarkestSecret()
{
	std::cout<<"\e[32m Enter darkest secret: \e[0m";
	std::cin>>DarkestSecret;
}
void Contact::getFirstName(int index)
{
	std::cout<<index<<" | "<<FirstName<<" | "<<LastName<<" | "<<Nickname<<" | "<<Age<<" | "<<DarkestSecret<<std::endl;
}
bool Contact::isEmptyFirstName()
{
	if (FirstName.length() > 0)
		return true;
	else
		return false;
}

