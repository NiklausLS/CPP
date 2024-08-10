/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:45:50 by nileempo          #+#    #+#             */
/*   Updated: 2024/08/10 12:33:00 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact() {}

void Contact::getContactInfo(const std::string& first, const std::string& last,
    const std::string& nick, const std::string& phone, const std::string& secret)
{
    firstName = first;
    lastName = last;
    nickName = nick;
    phoneNumber = phone;
    darkestSecret = secret;
}

void Contact::printContactInfo() const
{
    std::cout << std::setw(10) << firstName << "|";
    std::cout << std::setw(10) << lastName << "|";
    std::cout << std::setw(10) << nickName << std::endl;
}

std::string Contact::getFirstName() const
{
    return (firstName);
}

std::string Contact::getLastName() const
{
    return (lastName);
}

std::string Contact::getNickName() const
{
    return (nickName);
}

