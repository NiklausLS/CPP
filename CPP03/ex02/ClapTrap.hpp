/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:37:48 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/20 07:26:39 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <array>
#include <iomanip>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string PINK = "\033[35m";
const std::string RESET = "\033[0m";

class ClapTrap
{
    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap(const std::string& name);
        ~ClapTrap();
        void print_info() const;

    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
        int _startHitPoints;
};

#endif