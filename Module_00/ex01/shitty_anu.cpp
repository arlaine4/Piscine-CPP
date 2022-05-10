#include "header.hpp"


void print_contact_list(Contact contacts[], int nb_contacts)
{
	std::cout << std::setw(10) << "index | ";
	std::cout << std::setw(10) << "first name | ";
	std::cout << std::setw(10) << "last name | ";
	std::cout << std::setw(10) << "nickname |" << std::endl;
	for (int i = 0; i < nb_contacts; i++)
	{
		std::cout << std::setw(10) << i << " |";
		std::cout << std::setw(10) << contacts[i].first_name << " |";
		std::cout << std::setw(10) << contacts[i].last_name << " |";
		std::cout << std::setw(10) << contacts[i].nickname << " |" << std::endl;
	}
	std::cout << std::endl << std::endl;
}

int main(int ac, char **av)
{
	Contact lst_contacts[8];
	int contact_count(0);
	std::string command;

	std::cin.clear();
	while (command.compare("EXIT") != 0)
	{
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
		{
			Contact contact;
			contact.create_and_fill_new_contact();
			lst_contacts[contact_count] = contact;
			contact_count++;
			contact.print_contact_data();
		}
		else if (command.compare("SEARCH") == 0)
		{
			print_contact_list(lst_contacts, contact_count);
		}
	}
	std::cout << "EXITING..." << std::endl;
	return 0;
}
