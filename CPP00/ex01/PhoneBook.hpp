/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:10:28 by nileempo          #+#    #+#             */
/*   Updated: 2024/08/10 11:53:13 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <array>
#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
       std::array <Contact, 8> contacts;
       int  index;
       int  nbr;
        
    public:
        PhoneBook();
        void addContact();
        void printContacts() const;
        void searchContact() const; 
};

#endif