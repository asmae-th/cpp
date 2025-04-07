/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:25 by atahtouh          #+#    #+#             */
/*   Updated: 2025/04/07 11:36:42 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>
#include <string>


bool HandleInputError(void)
{
    if(!std::cin)
    {
        if(std::cin.eof())
        {
            std::cin.clear();
            std::cout<<"CTRL + D was pressed, Exit!! \n";
            return false;
        }
        else
        {
            std::cin.clear();
            std::cout<<" Error !!! , try again :)";
        }
    }
    return true;
}
std :: string delet_first_last_space(std :: string str)
{
    size_t first = str.find_first_not_of(' ');
    if(first == std::string::npos)
        return("");
    size_t last = str.find_last_not_of(' ');
    return(str.substr(first, (last - first + 1)));
}

std::string reduce_space(std::string str)
{
    std::string output;
    bool lastWasSpace = false;
    for(std::string::size_type i = 0; i < str.length(); i++)
    {
        if(std::isspace(str[i]))
        {
            if(!lastWasSpace)
            {
                output.push_back(' ');
                lastWasSpace = true;   
            }
        }
        else
        {
            output.push_back(str[i]);
            lastWasSpace = false;
        }
    }
    return (output);
}

bool contiansDigit(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        if(std::isdigit(str[i]))
            return(true);
    }
    return (false);
}
bool    onlySpace(std:: string str)
{
    size_t count = 0;
    for(size_t i = 0; i < str.length(); i++)
    {
        if(isspace(str[i]))
            count++;
    }
    return (count != str.length());
}

bool isNumeric(std::string str)
{
    for(std::string::size_type i = 0; i < str.length(); i++)
    {
        if(!std::isdigit(str[i]) && str[i] != '-' && str[i] != ' ')
            return (false);
    }
    return (true);
}

int addContact(PhoneBook& phonebook)
{
    if(std::cin.eof())
        return (-2);
    
    Contact newContact;
    std::string input;

    if(std::cin.eof())
        return (-2);
    std::cout << "First Name: ";
    while (std::getline(std::cin, input) && (input.empty() || !onlySpace(input)))
        std::cout << "Required field. First Name: ";
    input = delet_first_last_space(input);
    input = reduce_space(input);
    if(contiansDigit(input))
    {
        std::cout << "Invalid input: first name should not contain digits." << std::endl;
        return -1;
    }
    newContact.setFirstName(input);

    if(std::cin.eof())
        return (-2);
    std::cout << "Last Name: ";
    while (std::getline(std::cin, input) && (input.empty() || !onlySpace(input)))
        std::cout << "Required field. Last Name: ";
    input = delet_first_last_space(input);
    input = reduce_space(input);
    if(contiansDigit(input))
    {
        std::cout << "Invalid input: first name should not contain digits." << std::endl;
        return -1;
    }
    newContact.setLastName(input);
     
    if(std::cin.eof())
        return (-2);
    std::cout << "Nick name :";
    while (std::getline(std::cin, input) && (input.empty() || !onlySpace(input)))
        std::cout << "Required field. Nick name: ";
     newContact.setNickName(input);

     if(std::cin.eof())
         return (-2);
    std::cout << "Phone number: ";
    while (std::getline(std::cin, input) && (input.empty() || !onlySpace(input)))
        std::cout << "Required field. Phone number: ";
    if(!isNumeric(input))
    {
        std::cout << "Invalid input: first name should not contain digits." << std::endl;
        return -1;
    }
    newContact.setPhoneNumber(input);

    if(std::cin.eof())
         return (-2);
    std::cout << "darkest Secret: ";
    while (std::getline(std::cin, input) && input.empty())
        std::cout << "Required field. darkest Secret: ";
    newContact.setDarkstSecret(input);
    
    phonebook.addContact(newContact);
    return (0);
}


int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (true)
    {
        if(!HandleInputError())
            break;
        std::cout << "Enter one command (ADD, SEARCH, EXIT) : ";
        std::getline(std::cin, command);

        if (command == "ADD")
        {
            addContact(phoneBook);
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
        else if (command == "EXIT")
            break;
    }
    return 0;
}