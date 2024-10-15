/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 00:01:56 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/15 07:13:30 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std:: string& type) : type(type)
{
    std::cout << YELLOW << "CONSTRUCTOR" << RESET <<std::endl;
    //std::cout << "weapon type = " << type << std::endl;
}

Weapon::~Weapon()
{
    std::cout << YELLOW << "DESTRUCTOR" << RESET << std::endl;
}

const std::string& Weapon::getType() const
{
    return (type);
}

void Weapon::setType(const std::string& newType)
{
    type = newType;
}