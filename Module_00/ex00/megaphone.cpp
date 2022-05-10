#include <iostream>
#include <string>

void to_upper(std::string& content);

void to_upper(std::string& content)
{
	for (int i = 0; i < content.length(); i++)
	{
		content[i] = std::toupper(content[i]);
	}
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string content(av[i]);
			to_upper(content);
			if (i < ac - 1)
				std::cout << content;
			else
				std::cout << content << std::endl;
		}
	}
	return 0;
}
