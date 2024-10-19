/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:37:30 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/19 19:29:24 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    /*ClapTrap nico("Nicolas");

    nico.attack("kevin");
    nico.print_info();
    nico.takeDamage(10);
    nico.print_info();
    nico.beRepaired(3);
    nico.print_info();*/

    ScavTrap random;
    ScavTrap scav("scav");
    scav.print_info();

    scav.attack("kevin");
    scav.attack("anthony");
    scav.beRepaired(10);
    scav.print_info();
    scav.takeDamage(10);
    scav.print_info();
    scav.guardGate();
    return (0);
}