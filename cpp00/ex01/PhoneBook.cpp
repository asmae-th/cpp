/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmae <asmae@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:14:32 by atahtouh          #+#    #+#             */
/*   Updated: 2025/03/17 00:49:38 by asmae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook() : currentIndex(0), contactCount(0) {}

void PhoneBook::addContact( Contact &contact)
{
    if (contactCount < 8)
    {
        contacts[currentIndex] = contact;
        currentIndex++;
        contactCount++;
    }
    else
    {
        contacts[currentIndex] = contact;
        currentIndex = (currentIndex + 1) % 8;
    }
}

std::string PhoneBook::truncate(const std::string &str) 
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::displayAllContacts() 
{
    for (int i = 0; i < contactCount; ++i)
    {
        int arrayIndex = (contactCount == 8) ? (currentIndex + i) % 8 : i;
         Contact &contact = contacts[arrayIndex];
        std::cout << std::setw(10) << std::right << i << "|"
                  << std::setw(10) << truncate(contact.getFirstName()) << "|"
                  << std::setw(10) << truncate(contact.getLastName()) << "|"
                  << std::setw(10) << truncate(contact.getNickName()) << "|"
                  << std::endl;
    }
}

 Contact& PhoneBook::getContact(int displayIndex)
 {
    int arrayIndex;
    arrayIndex = (contactCount == 8) ? (currentIndex + displayIndex) % 8 : displayIndex;
    return contacts[arrayIndex];
}

int PhoneBook::getContactCount()
{
    return contactCount;
}