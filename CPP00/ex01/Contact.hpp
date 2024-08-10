/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:09:49 by nileempo          #+#    #+#             */
/*   Updated: 2024/08/10 12:28:44 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTATC_HPP
#define CONTATC_HPP

#include <string>
#include <array>
#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    
    public:
        Contact();
        void getContactInfo(const std::string& first, const std::string& last, const std::string& nick,
            const std::string& phone, const std::string& secret);
        void printContactInfo() const;
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
};

#endif