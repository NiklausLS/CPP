/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:10:28 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/25 18:32:31 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <array>
#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string PINK = "\033[35m";
const std::string RESET = "\033[0m";

class PhoneBook
{
    private:
       std::array <Contact, 8> contacts;
       int  index;
       int  nbr;
        
    public:
        PhoneBook();
        void addContact();
        //void printContacts() const;
        void searchContact() const;
        std::string checkInput(const std::string& str, const std::string& tab);
};

#endif
