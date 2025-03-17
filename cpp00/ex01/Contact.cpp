/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmae <asmae@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:14:35 by atahtouh          #+#    #+#             */
/*   Updated: 2025/03/15 02:22:46 by asmae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"


Contact  :: Contact(){}

void Contact :: setFirstName(std :: string &fname)
{
    firstName = fname;
}

void Contact :: setLastName(std :: string &lname)
{
    lastName = lname;
}

void Contact :: setNickName(std :: string &nname)
{
    nickname = nname;
}

void Contact :: setPhoneNumber(std :: string &phone)
{
    phoneNumber = phone;
}

void Contact :: setDarkstSecret(std :: string &secret)
{
    darkestSecret = secret;
}

std :: string Contact :: getFirstName()
{
    return firstName;
}

std :: string Contact :: getLastName()
{
    return lastName;
}

std :: string Contact :: getNickName()
{
    return nickname;
}

std :: string Contact :: getPhoneNumber()
{
    return phoneNumber;
}

std :: string Contact :: getDarkSecrer()
{
    return darkestSecret;
}
