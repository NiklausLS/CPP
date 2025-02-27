/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:26:21 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/27 22:57:37 by nileempo         ###   ########.fr       */
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

void Harl::complain(std::string level)
{
    functionPtr tab_ptr[] = {&Harl::debug, &Harl::info,
                         &Harl::warning, &Harl::error};

    std::string tab_level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    /*if (level.empty())
    {
        std::cout << RED << "ERROR: level is empty" << RESET << std::endl;
        return ;
    }*/
    for (int i = 0; i < 4; i++)
    {
        if (tab_level[i] == level)
        {
            (this->*tab_ptr[i])();
            return ;
        }
    }
    std::cout << RED << "CALL ME A MANAGER" << RESET << std::endl;
}
