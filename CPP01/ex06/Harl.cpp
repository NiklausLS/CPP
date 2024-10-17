/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:26:21 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/17 13:37:51 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << YELLOW << "CONSTRUCTOR" << RESET << std::endl;
}

Harl::~Harl()
{
    std::cout << YELLOW << "DESTRUCTOR" << RESET << std::endl;
}

void Harl::debug()
{
    std::cout << YELLOW << "DEBUG" << RESET << std::endl;
    std::cout << "I love having extra bacon for my " <<
        "7XL-double-cheese-triple-pickle-special-" <<
        "ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << YELLOW << "INFO" << RESET << std::endl;
    std::cout << "I cannot believe adding extra bacon costs " <<
        "more money. You didn’t put enough bacon in my burger!" <<
        " If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << YELLOW << "WARNING" << RESET << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << 
        "I’ve been coming for years whereas you started working here since last month."
              << std::endl;
}

void Harl::error()
{
    std::cout << YELLOW << "ERROR" << RESET << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now."
              << std::endl;
}

void Harl::karen()
{
    std::cout << YELLOW << "KAREN" << RESET << std::endl;
    std::cout << RED << "CALL ME A MANAGER" << std::endl;
}

void Harl::complain(std::string level)
{
    int karenLevel = makeLevel(level);

    switch (karenLevel)
    {
        case (DEBUG):
        {
            std::cout << YELLOW << "DEBUG" << std::endl;
            this->debug();
            break ;
        }
        case (INFO):
        {
            std::cout << YELLOW << "INFO" << std::endl;
            this->info();
            break ;
        }
        case (WARNING):
        {
            std::cout << YELLOW << "WARNING" << std::endl;
            this->warning();   
            break ;
        }
        case (ERROR):
        {
            std::cout << YELLOW << "ERROR" << std::endl;
            this->error();  
            break ; 
        }
        case (-1):
        {
            std::cout << YELLOW << "KAREN" << std::endl;
            this->karen();
            break ;
        }
    }
}

int Harl::makeLevel(std::string level)
{
    if (level == "DEBUG")
        return (DEBUG);
    else if (level == "INFO")
        return (INFO);
    else if (level == "WARNING")
        return (WARNING);
    else if (level == "ERROR")
        return (ERROR);
    else
        return (-1);
}