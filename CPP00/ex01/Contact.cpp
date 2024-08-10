/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:45:50 by nileempo          #+#    #+#             */
/*   Updated: 2024/08/09 22:05:20 by nileempo         ###   ########.fr       */
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
    std::cout << "  - First name : " << firstName << std::endl;
    std::cout << "  - Last name : " << lastName << std::endl;
    std::cout << "  - Nickname : " << nickName << std::endl;
    std::cout << "  - Phone number : " << phoneNumber << std::endl;
    std::cout << "  - Darkest secret : " << darkestSecret << std::endl;
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