/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:26:21 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/15 16:47:03 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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
    
}