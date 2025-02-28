/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:36:54 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/28 12:31:06 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    : name(name), weapon(NULL)
{
    //std::cout << "HumanB" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    /*std::cout << "setWeapon = "
              << weapon.getType()
              << std::endl;*/
    this->weapon = &weapon;
}

void HumanB::attack() const
{
    if (this->weapon && !this->weapon->getType().empty())
    {
        std::cout << this->name << " attacks with their "
                  << GREEN << this->weapon->getType() 
                  << RESET << std::endl;
    }
    else
    {
        std::cout << this->name << RED << " don't have a weapon "
                  << "so he attacks with his fists!"
                  << RESET << std::endl;
    }
}