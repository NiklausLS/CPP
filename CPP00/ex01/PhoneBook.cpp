/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:45:36 by nileempo          #+#    #+#             */
/*   Updated: 2024/08/09 18:58:10 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook() : index(0), nbr(0) {}

void    PhoneBook::addContact()
{
    std::string first, last, nick, phone, secret;

    std::cout << "Please enter the contact first name : ";
    std::getline(std::cin >>std::ws, first);

    std::cout << "Please enter the contact last name : ";
    std::getline(std::cin >> std::ws, last);

    std::cout << "Please enter the contact nickname : ";
    std::getline(std::cin>> std::ws, nick);

    std::cout << "Please enter the contact phone number : ";
    std::getline(std::cin >> std::ws, phone);

    std::cout << "Please enter the contact darkest secret : ";
    std::getline(std::cin >> std::ws, secret);

    contacts[index].getContactInfo(first, last, nick, phone, secret);
    index = (index + 1) % 8;

    std::cout << "The contact is added to the phone book" << std::endl;

    if (nbr < 8)
        nbr++;
}



void    PhoneBook::printContatcs() const
{
    for (int i = 0; i < 8; ++i)
    {
        std::cout << "Contact " << i + 1 << ":" << std::endl;
        contacts[i].printContactInfo();
        std::cout << std::endl;
    }
}
