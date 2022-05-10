#include "contact.hpp"


Contact::Contact(void)
{
	return;
}

void Contact::print_contact_data(void)
{
	std::cout << std::endl << "First name : " << this->first_name << std::endl;
	std::cout << "Last name : " << this->last_name << std::endl;
	std::cout << "nickname : " << this->nickname << std::endl;
	std::cout << "Phone number : " << this->phone_number << std::endl;
	std::cout << "Darkest secret : " << this->darkest_secret << std::endl << std::endl;
}

void Contact::create_and_fill_new_contact(void)
{
	this->fill_first_name();
	this->fill_last_name();
	this->fill_nickname();
	this->fill_phone_number();
	this->fill_darkest_secret();
}

void Contact::fill_first_name(void)
{
	while (this->first_name.length() == 0)
	{
		std::cout << std::endl << "What's your first name : ";
		std::cin.clear();
		std::getline(std::cin, this->first_name);
	}
}

void Contact::fill_last_name(void)
{
	while (this->last_name.length() == 0)
	{
		std::cout << std::endl << "What's your last name : ";
		std::cin.clear();
		std::getline(std::cin, this->last_name);
	}
}

void Contact::fill_nickname(void)
{
	while (this->nickname.length() == 0)
	{
		std::cout << std::endl << "What's your nickname : ";
		std::cin.clear();
		std::getline(std::cin, this->nickname);
	}
}

void Contact::fill_phone_number(void)
{
	while (this->phone_number.length() == 0)
	{
		std::cout << std::endl << "What's your phone number : ";
		std::cin.clear();
		std::getline(std::cin, this->phone_number);
	}
}

void Contact::fill_darkest_secret(void)
{
	while (this->darkest_secret.length() == 0)
	{
		std::cout << std::endl << "What's your darkest secret : ";
		std::cin.clear();
		std::getline(std::cin, this->darkest_secret);
	}
}

Contact::~Contact(void)
{
	return;
}
