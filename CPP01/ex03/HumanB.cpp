/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:36:54 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/15 15:06:09 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    : name(name), weapon(nullptr)
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
    if (this->weapon)
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