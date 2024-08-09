/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:45:36 by nileempo          #+#    #+#             */
/*   Updated: 2024/08/09 17:53:33 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook() : i(0) {}

void    PhoneBook::addContact()
{
    std::string first, last, nick, phone, secret;

    std::cout << "Please input your first name :";
    std::getline(std::cin >>std::ws, first);

    std::cout << "Please input your last name :";
    std::getline(std::cin >> std::ws, last);

    std::cout << "Please input your nickname : ";
    std::getline(std::cin>> std::ws, nick);

    std::cout << "Please input your phone number :";
    std::getline(std::cin >> std::ws, phone);

    std::cout << "Please input your darkest secret";
    std::getline(std::cin >> std::ws, secret);
}