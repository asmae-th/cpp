/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:14:32 by atahtouh          #+#    #+#             */
/*   Updated: 2025/04/07 11:33:49 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook() : currentIndex(0), contactCount(0) {}

// void PhoneBook::addContact( Contact &contact)
// {
//     if (contactCount < 8)
//     {
//         contacts[currentIndex] = contact;
//         currentIndex++;
//         contactCount++;
//     }
//     else
//     {
//         contacts[currentIndex] = contact;
//         currentIndex = (currentIndex + 1) % 8;
//     }
// }

void PhoneBook::addContact(Contact &contact)
{
    contacts[currentIndex] = contact;                  // Remplacer le contact au currentIndex
    currentIndex = (currentIndex + 1) % 8;             // Avancer au prochain emplacement
    if (contactCount < 8)
        contactCount++;                                // Incrémenter seulement si < 8
}


std::string PhoneBook::truncate(const std::string &str) 
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::displayAllContacts() 
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < contactCount; ++i)
    {
        int arrayIndex =(currentIndex + i) % 8 ;
        
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
    int arrayIndex = (currentIndex + displayIndex) % 8;
    return contacts[arrayIndex];
}


int PhoneBook::getContactCount()
{
    return contactCount;
}