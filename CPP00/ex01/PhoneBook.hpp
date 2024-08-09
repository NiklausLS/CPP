/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:10:28 by nileempo          #+#    #+#             */
/*   Updated: 2024/08/09 17:53:30 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <array>
#include "Contact.hpp"

class PhoneBook
{
    private:
       std::array <Contact, 8> contacts;
       int  i;
        
    public:
        PhoneBook();
        void addContact();
        
};

#endif