/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:26:21 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/27 23:11:50 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    //std::cout << YELLOW << "CONSTRUCTOR" << RESET << std::endl;
}

Harl::~Harl()
{
    //std::cout << YELLOW << "DESTRUCTOR" << RESET << std::endl;
}

void Harl::debug()
{
    std::cout << "[ DEBUG ] " <<
        "I love having extra bacon for my " <<
        "7XL-double-cheese-triple-pickle-special-" <<
        "ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]" <<
        "I cannot believe adding extra bacon costs " <<
        "more money. You didn’t put enough bacon in my burger!" <<
        " If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ] " <<
        "I think I deserve to have some extra bacon for free." << 
        "I’ve been coming for years whereas you started working here since last month."
              << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]" <<
        "This is unacceptable! I want to speak to the manager now."
        << std::endl;
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

void Harl::complain(std::string level)
{
    int karenLevel = makeLevel(level);

    switch (karenLevel)
    {
        case (DEBUG):
            this->debug();
        case (INFO):
            this->info();
        case (WARNING):
            this->warning();   
        case (ERROR):
            this->error();
            break;
        default:
        {
            std::cout << RED << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
            break ;
        }
    }
}
