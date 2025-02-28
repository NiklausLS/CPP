/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 07:43:14 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/28 12:20:39 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
    : name(name), weapon(&weapon)
{
    //std::cout << "HumanA"
    //          << std::endl;
}

void HumanA::setWeapon(Weapon& weapon)
{
    /*std::cout << "setWeapon = "
              << weapon.getType()
              << std::endl;*/
    this->weapon = &weapon;
}

void HumanA::attack() const
{
    std::cout << name << " attacks with their "
              << GREEN << weapon->getType()
              << RESET << std::endl;
}
