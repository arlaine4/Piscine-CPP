#ifndef CLASS_H
#define CLASS_H
#include "header.hpp"


class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		
		Contact(void);
		~Contact(void);

		void print_contact_data(void);
		void create_and_fill_new_contact(void);

		/*
		* --------------------------------------- *
		   Functions to fill public class contant
		*/
		void fill_first_name(void);
		void fill_last_name(void);
		void fill_nickname(void);
		void fill_phone_number(void);
		void fill_darkest_secret(void);
		/*
		* --------------------------------------- *
		*/

};

#endif
