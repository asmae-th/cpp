/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmae <asmae@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:25 by atahtouh          #+#    #+#             */
/*   Updated: 2025/03/17 00:46:49 by asmae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>
#include <string>

int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (true)
    {
        std::cout << "Entrez une commande (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "EXIT")
            break;
        else if (command == "ADD")
        {
            Contact newContact;
            std::string input;

            std::cout << "First Name: ";
            while (std::getline(std::cin, input) && input.empty())
                std::cout << "Required field. First Name: ";
            newContact.setFirstName(input);

            std::cout << "Last Name: ";
            while (std::getline(std::cin, input) && input.empty())
                std::cout << "Required field. Last Name: ";
            newContact.setLastName(input);
            
            std::cout << "Nick name ";
            while (std::getline(std::cin, input) && input.empty())
                std::cout << "Required field. Nick name: ";
            newContact.setNickName(input);

            std::cout << "Phone number: ";
            while (std::getline(std::cin, input) && input.empty())
                std::cout << "Required field. Phone number: ";
            newContact.setPhoneNumber(input);

            std::cout << "darkest Secret: ";
            while (std::getline(std::cin, input) && input.empty())
                std::cout << "Required field. darkest Secret: ";
            newContact.setDarkstSecret(input);
    
            phoneBook.addContact(newContact);
        } 
        else if (command == "SEARCH")
        {
            phoneBook.displayAllContacts();
            std::cout << "Index: ";
            std::string input;
            std::getline(std::cin, input);
            std::istringstream iss(input);
            int index;
            if (iss >> index && index >= 0 && index < phoneBook.getContactCount())
            {
                 Contact &contact = phoneBook.getContact(index);
                std :: cout << contact.getFirstName()<< std :: endl;
                std :: cout << contact.getLastName()<< std :: endl;
                std :: cout << contact.getNickName()<< std :: endl;
                std :: cout << contact.getPhoneNumber()<< std :: endl;
                std :: cout << contact.getDarkSecrer()<< std :: endl;
            }
            else
            {
                std::cout << "Index invalide!" << std::endl;
            }
        }
    }
    return 0;
}