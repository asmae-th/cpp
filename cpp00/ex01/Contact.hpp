/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmae <asmae@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 23:38:15 by atahtouh          #+#    #+#             */
/*   Updated: 2025/03/20 14:26:17 by asmae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTCT_HPP
#define CONTCT_HPP

#include <string>
#include <iostream>
class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        Contact();
        void setFirstName(std ::string &fname);
        void setLastName(std ::string &lname);
        void setNickName(std ::string &nname);
        void setPhoneNumber(std ::string &phone);    
        void setDarkstSecret(std ::string &secret);

        std :: string getFirstName();
        std :: string getLastName();
        std :: string getNickName();
        std :: string getPhoneNumber();
        std :: string getDarkSecrer();
    
};

#endif