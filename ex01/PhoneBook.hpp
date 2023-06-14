
class PhoneBook 
{
	private:
		Contact	contacts[3];
	public:
		void addContact()
		{
			std::string word;
			int			number;
			int			index;

			index = 0;
			while (contacts[index].hasFreeSlot())
				index++;
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

		void	getContact()
		{
			contacts[0].getFirstName();
		}
		void searchContact()
		{
			std::cout<<std::endl;
			std::cout<<"Index | First Name | Last Name | Nickname "<<std::endl;
			getContact();
			std::cout<<std::endl;
			std::cout<<std::endl;
		}
		
};

