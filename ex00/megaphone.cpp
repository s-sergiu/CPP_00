#include <iostream>

int main (int argc, char **argv)
{
	std::string	word;

	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE NOISE *"<<std::endl;
	else
	{
		for(int i = 1; i < argc; i++)
		{
			word = argv[i]; 
			for(size_t j = 0; j < word.length(); j++)
				std::cout<<(char)std::toupper(word[j]);
		std::cout<<" ";
		}
	std::cout<<std::endl;
	}
}
