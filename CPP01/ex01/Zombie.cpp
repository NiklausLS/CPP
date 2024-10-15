/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:47:38 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/14 23:32:39 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string RESET = "\033[0m";

Zombie::Zombie()
{
    //std::cout << YELLOW <<"CONSTRUCTOR" << RESET <<std::endl;
}

Zombie::~Zombie()
{
    //std::cout << YELLOW << "DESTRUCTOR" << RESET << std::endl;
    std::cout << RED << _name << RESET << " has returned to the grave" << std::endl;
}

void    Zombie::announce() const
{
    std::cout << _name << ": BraiiiiiiinnnzzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    _name = name;
}
