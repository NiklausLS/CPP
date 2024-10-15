/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:45:36 by nileempo          #+#    #+#             */
/*   Updated: 2024/08/10 12:55:40 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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

    std::cout << "  - " << first << " is added to the phone book" << std::endl;

    if (nbr < 8)
        nbr++;
}

/*void    PhoneBook::printContatcs() const
{
    for (int i = 0; i < 8; ++i)
    {
        std::cout << "\nContact " << i + 1 << " :" << std::endl;
        contacts[i].printContactInfo();
        std::cout << std::endl;
    }
}*/

/*void    PhoneBook::printContacts() const
{
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << std::endl;

    for (int i = 0; i < nbr; ++i)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << contacts[i].getFirstName() << "|";
        std::cout << std::setw(10) << contacts[i].getLastName() << "|";
        std::cout << std::setw(10) << contacts[i].getNickName() << std::endl;
    }
}*/

void    PhoneBook::searchContact() const
{
    if (nbr == 0)
    {
        std::cout << "The phone book is empty, please use ADD to add a contact" << std::endl;
        return;
    }

    std::string input;
    std::cout << "Please enter the index of your contact :" << std::endl;
    std::getline(std::cin, input);
    for (size_t i = 0; i < input.length(); ++i)
    {
        if (!std::isdigit(input[i]))
        {
            std::cout << "Your input is invalid. Please enter a number" << std::endl;
            return;
        }
    }

    int index;
    index = std::atoi(input.c_str());
    if (index < 1 || index > nbr)
    {
        std::cout << "Your index is invalid. Please enter un number between 1 and " << nbr << std::endl;
        return;
    }

    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << std::endl;
    std::cout << std::setw(10) << index << "|";
    contacts[index - 1].printContactInfo();
}   