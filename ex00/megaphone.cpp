#include <iostream>
#include <string.h>
#include <ctype.h>

int main (int argc, char **argv)
{

	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE NOISE *"<<std::endl;
	else
	{
		for(int i = 1; i <= 3; i++)
		{
			for(int j = 0; j <= (int)strlen(argv[1]); j++)
				std::cout<<(char)toupper(argv[i][j]);
		std::cout<<" ";
		}
	std::cout<<std::endl;
	}
}
