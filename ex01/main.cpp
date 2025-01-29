/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christian <christian@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:02:38 by christian         #+#    #+#             */
/*   Updated: 2025/01/29 06:07:43 by christian        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

Contact getContactDetails()
{
	Contact contact;
	std::string input;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, input);
	contact.setFirstName(input);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, input);
	contact.setLastName(input);

	std::cout << "Enter Nickname: ";
	std::getline(std::cin, input);
	contact.setNickname(input);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, input);
	contact.setPhoneNumber(input);

	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, input);
	contact.setDarkestSecret(input);

	return contact;
}

int main() 
{
	PhoneBook phoneBook;
	std::string command;

	while (true) 
	{
		std::cout << "\nEnter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			Contact newContact = getContactDetails();
			phoneBook.addContact(newContact);
			std::cout << "Contact added successfully!" << std::endl;
		}
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else
			std::cout << "Invalid command!" << std::endl;
		if (std::cin.eof())
			break;
	}

	return 0;
}