/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmae <asmae@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 23:38:31 by atahtouh          #+#    #+#             */
/*   Updated: 2025/03/20 14:26:54 by asmae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include"Contact.hpp"

class PhoneBook
{
    private :
        Contact contacts[8];
        int currentIndex;
        int contactCount;

    public:
        PhoneBook();
        void addContact(Contact &contact);
        std :: string truncate(const std::string &str);
        void displayAllContacts();
        Contact& getContact(int displayIndex);
        int getContactCount();
};

#endif 