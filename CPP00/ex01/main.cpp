/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:19:08 by nileempo          #+#    #+#             */
/*   Updated: 2024/08/09 18:43:07 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

/* TO DO LIST
 * implémenter deux classes : PhoneBook et Contact
 * ADD / SEARCH
 *
 * 
 */


int main()
{
    PhoneBook phoneBook;
    std::string input;
    
    std::cout << "Hellow and welcome dear user :)" << std::endl;
    std::cout << "  You can type : " <<std::endl;
    std::cout << "      - ADD to add a contact to your list" << std::endl;
    std::cout << "      - SEARCH to look for a existing contact" << std::endl;
    std::cout << "      - EXIT to exit this program" << std::endl;
    std::cout << "      * Other input won't work but feel free to try" << std::endl;

    //Contact contact;
    //contact.getInfo("Nicolas", "Leempoels", "Nikki", "007", "Swag");
    //std::cout << "User informations :" << std::endl;
    //contact.printInfo();
    
    while (true)
    {
        std::cout << std::endl << "Please enter a command : ";
        std::getline(std::cin, input);

        if (input == "EXIT")
        {
            std::cout << "Your input is EXIT. The program will close" << std::endl;
            break;
        }
        else if (input == "ADD")
        {
            std::cout << "Your input is ADD." << std::endl;
            phoneBook.addContact();
        }
        else if (input == "SEARCH")
        {
            std::cout << "Your input is SEARCH." << std::endl;
            phoneBook.printContatcs();
        }
        else
        {
            std::cout << "Your input is " << input << std::endl;
            std::cout << "Please enter a VALID command, i litteraly told you wich one are available you donkey" << std::endl;
        }
    }
    return (0);
}