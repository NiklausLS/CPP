/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:47:09 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/19 19:26:24 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Legacy")
{
    std::cout << YELLOW << "SCAVTRAP DEFAULT CONSTUCTOR" << RESET << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap:: ~ScavTrap()
{
    std::cout << YELLOW << "DESCTUCTOR" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << YELLOW << "SCAVTRAP CONSTUCTOR" << RESET << std::endl;
    std::cout << name << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

void ScavTrap::guardGate()
{
    std::cout << BLUE << _name << " is in gate keeper mode." << std::endl;
}