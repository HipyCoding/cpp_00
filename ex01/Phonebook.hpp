/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christian <christian@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 03:12:15 by christian         #+#    #+#             */
/*   Updated: 2025/01/29 05:55:03 by christian        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	static const int MAX_CONTACTS = 8;
	Contact contacts[MAX_CONTACTS];
	int currentSize;
	int oldestIndex;

	std::string truncateString(const std::string& str) const;
	void displayContact(const Contact& contact, int index) const;
	bool isValidIndex(const std::string& input) const;

public:
	PhoneBook();
	void addContact(const Contact& contact);
	void searchContact() const;
	void displayAllContacts() const;
};

#endif