#include "header.hpp"


void print_contact_list(Contact contacts[], int nb_contacts)
{
	std::cout << std::endl << std::setw(11) << "index | ";
	std::cout << std::setw(11) << "first name | ";
	std::cout << std::setw(11) << "last name | ";
	std::cout << std::setw(11) << "nickname |" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	for (int i = 1; i < nb_contacts + 1; i++)
	{
		std::cout << std::setw(9) << i << "|";
		if (contacts[i - 1].first_name.length() >= 10)
			std::cout << std::setw(10) << contacts[i - 1].first_name.substr(0, 8) << ". | ";
		else
			std::cout << std::setw(11) << contacts[i - 1].first_name << " | ";
		if (contacts[i - 1].last_name.length() >= 10)
			std::cout << std::setw(10) << contacts[i - 1].last_name.substr(0, 8) << ". | ";
		else
			std::cout << std::setw(9) << contacts[i - 1].last_name << " | ";
		if (contacts[i - 1].nickname.length() >= 10)
			std::cout << std::setw(10) << contacts[i - 1].nickname.substr(0, 8) << ". | ";
		else	
			std::cout << std::setw(9) << contacts[i - 1].nickname << " |" << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cin.clear();
	int index(0);
	std::cin >> index;
	if (index != 0 && (index >= 1 && index <= nb_contacts))
		contacts[index - 1].print_contact_data();
	std::cin.clear();
}

int main(int ac, char **av)
{
	Contact lst_contacts[8];
	int contact_count(0);
	std::string command;

	std::cin.clear();
	std::cout << "WAITING FOR COMMAND..." << std::endl;
	while (command.compare("EXIT") != 0)
	{
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
		{
			Contact contact;
			contact.create_and_fill_new_contact();
			lst_contacts[contact_count] = contact;
			contact_count++;
		}
		else if (command.compare("SEARCH") == 0)
			print_contact_list(lst_contacts, contact_count);
		std::cout << "WAITING FOR COMMAND..." << std::endl;
	}
	std::cout << "EXITING..." << std::endl;
	return 0;
}
