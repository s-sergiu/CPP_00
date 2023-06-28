
#include "Contact.hpp"

void	Contact::createContact()
{
	std::cout<<"\e[32m Enter first name: \e[0m";
	std::cin.ignore();
	std::getline(std::cin, FirstName, '\n');
	if (std::cin.eof())	
		return ;
	std::cout<<"\e[32m Enter last name: \e[0m";
	std::getline(std::cin, LastName, '\n');
	if (std::cin.eof())	
		return ;
	std::cout<<"\e[32m Enter nickname: \e[0m";
	std::getline(std::cin, Nickname, '\n');
	if (std::cin.eof())	
		return ;
	std::cout<<"\e[32m Enter phone number: \e[0m";
	std::getline(std::cin, PhoneNumber, '\n');
	if (std::cin.eof())	
		return ;
	std::cout<<"\e[32m Enter darkest secret: \e[0m";
	std::getline(std::cin, DarkestSecret, '\n');
	if (std::cin.eof())	
		return ;
}

bool	Contact::isEmpty()
{
	if (FirstName.empty())
		return (eraseContact());
	else if (LastName.empty())
		return (eraseContact());
	else if (Nickname.empty())
		return (eraseContact());
	else if (PhoneNumber.empty())
		return (eraseContact());
	else if (DarkestSecret.empty())
		return (eraseContact());
	return (false);
}

bool	Contact::eraseContact()
{
	FirstName.erase(FirstName.begin(), FirstName.end());
	LastName.erase(LastName.begin(), LastName.end());
	Nickname.erase(Nickname.begin(), Nickname.end());
	PhoneNumber.erase(PhoneNumber.begin(), PhoneNumber.end());
	DarkestSecret.erase(DarkestSecret.begin(), DarkestSecret.end());
	return (true);
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
	std::cout<<"\e[1;33m*Display contact list again: ";
	std::cout<<"\e[33m\e[48;5;18m[0]\e[0m /";
	std::cout<<"\e[1;31m Return to menu: \e[0m";
	std::cout<<"\e[33m\e[48;5;18m[1]\e[0m: ";	
}

void	Contact::listContactSummary(int index)
{
	std::cout<<"\e[94m\e[4m";
	std::cout<<"|";
	std::cout<<std::right<<std::setw(10)<<index;
	std::cout<<"\e[93m";
	std::cout<<"|";
	if (FirstName.length() > 10)
		std::cout<<std::right<<std::setw(9)<<FirstName.substr(0, 9)<<".";
	else
		std::cout<<std::right<<std::setw(10)<<FirstName;
	std::cout<<"|";
	if (LastName.length() > 10)
		std::cout<<std::right<<std::setw(9)<<LastName.substr(0, 9)<<".";
	else
		std::cout<<std::right<<std::setw(10)<<LastName;
	std::cout<<"|";
	if (Nickname.length() > 10)
		std::cout<<std::right<<std::setw(9)<<Nickname.substr(0, 9)<<".";
	else
		std::cout<<std::right<<std::setw(10)<<Nickname;
	std::cout<<"|";
	std::cout<<std::endl;
	std::cout<<"\e[0m";

}
