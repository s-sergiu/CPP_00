
#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::addContact(int index)
{
	std::string word;
	char	number;

	std::cout<<"Enter first name: ";
	std::cin>>word;
	contacts[index].setFirstName(word);
	std::cout<<"Enter last name: ";
	std::cin>>word;
	contacts[index].setLastName(word);
	std::cout<<"Enter nickname: ";
	std::cin>>word;
	contacts[index].setNickname(word);
	std::cout<<"Enter age: ";
	std::cin>>number;
	contacts[index].setAge(number);
	std::cout<<"Enter darkest secret: ";
	std::cin>>word;
	contacts[index].setDarkestSecret(word);
}

void	PhoneBook::getContact()
{
	int	i;

	i = 0;
	while(i < SLOTS)
	{
		if (contacts[i].isEmptyFirstName())
			contacts[i].getFirstName(i);
		i++;
	}
}
void PhoneBook::searchContact()
{
	std::cout<<std::endl;
	std::cout<<"Index | First Name | Last Name | Nickname "<<std::endl;
	getContact();
	std::cout<<std::endl;
	std::cout<<std::endl;
}
