/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:37:59 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/20 07:37:39 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
{
    std::cout << YELLOW << "CONSTUCTOR" << RESET << std::endl;
    std::cout << name << std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    _startHitPoints = _hitPoints;

    std::cout << std::setw(15) << "Hit points" << "|";
    std::cout << std::setw(15) << "Energy points" << "|";
    std::cout << std::setw(15) << "Attack damage"  <<std::endl;
    
    std::cout << std::setw(15) << _hitPoints << "|";
    std::cout << std::setw(15) << _energyPoints << "|";
    std::cout << std::setw(15) << _attackDamage << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << YELLOW << "DESTRUCTOR" << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints -= 1;
        std::cout << GREEN <<_name << RESET <<" attacks " << RED << target << RESET
              << ", causing " << RED << _attackDamage << RESET << " points of damage !" << std::endl; 
    }
    else if (_energyPoints <= 0)
    {
        std::cout << _name << RED << " don't have any energy left." << RESET << std::endl;
        return ;
    }
    else if (_hitPoints <= 0)
    {
        std::cout << _name << RED << " don't have any hit point left." << RESET << std::endl;
        return ;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << _name << " is already out." << std::endl;
        return ;
    }
    _hitPoints -= amount;
    std::cout << GREEN <<_name << RESET << " takes " << RED
              << amount << RESET << " points of damage !" << std::endl; 
    if (_hitPoints <= 0)
        std::cout << RED << _name << " fainted." << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        int checkHitPoints = _hitPoints + amount;
        if (checkHitPoints > _startHitPoints)
        {
            checkHitPoints = _startHitPoints;
            std::cout << "Life is full. You just waisted energy." << std::endl;
        }
        else
            std::cout << GREEN <<_name << RESET <<" repairs himself of " << 
           YELLOW << amount << RESET << " points of damage !" << std::endl;
        _energyPoints -= 1;
        _hitPoints = checkHitPoints;
    }
    else if (_energyPoints <= 0)
    {
        std::cout << _name << RED << " don't have any energy left." << RESET << std::endl;
        return ;
    }
    else if (_hitPoints <= 0)
    {
        std::cout << _name << RED << " don't have any hit point left." << RESET << std::endl;
        return ;
    }
}

void ClapTrap::print_info() const
{
    std::cout << std::endl;
    std::cout << std::setw(15) << "Hit points" << "|";
    std::cout << std::setw(15) << "Energy points" << "|";
    std::cout << std::setw(15) << "Attack damage"  <<std::endl;
    
    std::cout << std::setw(15) << _hitPoints << "|";
    std::cout << std::setw(15) << _energyPoints << "|";
    std::cout << std::setw(15) << _attackDamage << std::endl;
    std::cout << std::endl;
}
