/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:45:50 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/25 18:12:42 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*std::string Contact::getFirstName() const
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
}*/

std::string Contact::checkInput(const std::string& str, const std::string& tab)
{
    std::string input;
    bool isValid = false;

    while (!isValid)
    {
        std::cout << str;
        std::getline(std::cin, input);

        if (!input.empty())
            isValid = true;
        else
            std::cout << "ERROR : " << tab << " is empty" << std::endl;
    }
    return (input);
}
