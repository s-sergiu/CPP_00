
class Contact 
{
	private:
		std::string		FirstName;
		std::string		LastName;
		std::string		Nickname;
		int				Age;
		std::string		DarkestSecret;
	public:
		void setFirstName(std::string firstname)
		{
			FirstName = firstname;
		}
		void setLastName(std::string lastname)
		{
			LastName = lastname;
		}
		void setNickname(std::string nickname)
		{
			Nickname = nickname;
		}
		void setAge(int age)
		{
			Age = age;
		}
		void setDarkestSecret(std::string secret)
		{
			DarkestSecret = secret;
		}
		void getFirstName()
		{
			std::cout<<FirstName;
		}
		bool hasFreeSlot()
		{
			if (FirstName.length() > 0)
				return true;
			else
				return false;
		}
};
