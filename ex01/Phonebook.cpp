/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christian <christian@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 03:12:13 by christian         #+#    #+#             */
/*   Updated: 2025/01/29 06:07:51 by christian        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : currentSize(0), oldestIndex(0) {}

std::string PhoneBook::truncateString(const std::string& str) const
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void PhoneBook::addContact(const Contact& contact)
{
	contacts[oldestIndex] = contact;
	if (currentSize < MAX_CONTACTS)
		currentSize++;
	oldestIndex = (oldestIndex + 1) % MAX_CONTACTS;
}

void PhoneBook::displayContact(const Contact& contact, int index) const
{
	std::cout << "|" << std::setw(10) << index;
	std::cout << "|" << std::setw(10) << truncateString(contact.getFirstName());
	std::cout << "|" << std::setw(10) << truncateString(contact.getLastName());
	std::cout << "|" << std::setw(10) << truncateString(contact.getNickname());
	std::cout << "|" << std::endl;
}

bool PhoneBook::isValidIndex(const std::string& input) const
{
	if (input.empty() || input.length() > 1)
		return false;
	if (!isdigit(input[0]))
		return false;
	int index = input[0] - '0';
	return index >= 0 && index < currentSize;
}

void PhoneBook::displayAllContacts() const
{
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < currentSize; i++)
		displayContact(contacts[i], i);
	std::cout << "|-------------------------------------------|" << std::endl;
}

void PhoneBook::searchContact() const
{
	if (currentSize == 0)
	{
		std::cout << "Phone book is empty!" << std::endl;
		return;
	}
	displayAllContacts();
	std::cout << "Enter index to display contact details: ";
	std::string input;
	std::getline(std::cin, input);
	if (!isValidIndex(input))
	{
		std::cout << "Invalid index!" << std::endl;
		return;
	}
	int index = input[0] - '0';
	const Contact& contact = contacts[index];
	std::cout << "\nContact Details:" << std::endl;
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}