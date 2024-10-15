/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 07:43:14 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/15 15:07:00 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) : name(name), weapon(weapon)
{
    //std::cout << "HumanA"
    //          << std::endl;
}

void HumanA::attack() const
{
    std::cout << name << " attacks with their "
              << GREEN << weapon.getType()
              << RESET << std::endl;
}
