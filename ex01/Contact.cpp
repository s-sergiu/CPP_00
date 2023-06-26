
#include "Contact.hpp"

void	Contact::createContact()
{
	std::cout<<"\e[32m Enter first name: \e[0m";
	std::cin.ignore();
	std::getline(std::cin, FirstName, '\n');
	std::cout<<"\e[32m Enter last name: \e[0m";
	std::cin.ignore();
	std::getline(std::cin, LastName, '\n');
	std::cout<<"\e[32m Enter nickname: \e[0m";
	std::cin.ignore();
	std::getline(std::cin, Nickname, '\n');
	std::cout<<"\e[32m Enter phone number: \e[0m";
	std::cin.ignore();
	std::getline(std::cin, PhoneNumber, '\n');
	std::cout<<"\e[32m Enter darkest secret: \e[0m";
	std::cin.ignore();
	std::getline(std::cin, DarkestSecret, '\n');
}

void	Contact::checkIfEmpty()
{
	if (FirstName.empty())
		eraseContact();
	else if (LastName.empty())
		eraseContact();
	else if (Nickname.empty())
		eraseContact();
	else if (PhoneNumber.empty())
		eraseContact();
	else if (DarkestSecret.empty())
		eraseContact();
}

void	Contact::eraseContact()
{
	FirstName.erase(FirstName.begin(), FirstName.end());
	LastName.erase(LastName.begin(), LastName.end());
	Nickname.erase(Nickname.begin(), Nickname.end());
	PhoneNumber.erase(PhoneNumber.begin(), PhoneNumber.end());
	DarkestSecret.erase(DarkestSecret.begin(), DarkestSecret.end());
}

bool	Contact::exists()
{
	if (FirstName.length())
		return(true);
	else if (LastName.length())
		return(true);
	else if (Nickname.length())
		return(true);
	else if (PhoneNumber.length())
		return(true);
	else if (DarkestSecret.length())
		return(true);
	return (false);
}

void	Contact::getContactInfo()
{		
	std::cout<<"\e[32m First name: \e[0m"<<FirstName<<std::endl;	
	std::cout<<"\e[32m Last name: \e[0m"<<LastName<<std::endl;	
	std::cout<<"\e[32m Nickname: \e[0m"<<Nickname<<std::endl;	
	std::cout<<"\e[32m Telephone: \e[0m"<<PhoneNumber<<std::endl;	
	std::cout<<"\e[32m Darkest secret: \e[0m"<<DarkestSecret;	
	std::cout<<std::endl;
	std::cout<<std::endl;
	std::cout<<"\e[35m Display contact list again \e[47m[0]\e[0m /";
	std::cout<<"\e[33m Return to menu \e[35m\e[47m[1]\e[0m: ";	
}

void	Contact::getFirstName(int index)
{
	std::cout<<index<<" | "<<FirstName<<" | "<<LastName<<" | "<<Nickname<<" | "<<PhoneNumber<<" | "<<DarkestSecret<<std::endl;
}
