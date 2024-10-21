/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:36:20 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/20 06:55:57 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << YELLOW << name << " FRAG CONSTUCTOR" << RESET << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << YELLOW << _name << " FRAGTRAP DESTRUCTOR" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << BLUE << _name << " is requesting a high five." << std::endl;
}