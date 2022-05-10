#include "header.hpp"
#include "contact.hpp"

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
			std::cout << "We currently have " << contact_count << " contacts stored" << std::endl;
		}
	}
	std::cout << "EXITING..." << std::endl;
	return 0;
}
