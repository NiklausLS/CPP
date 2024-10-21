/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:37:30 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/20 07:40:46 by nileempo         ###   ########.fr       */
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

    ScavTrap scav("scav");
    //scav.print_info();

    scav.attack("kevin");
    scav.attack("anthony");
    scav.beRepaired(10);
    //scav.print_info();
    //scav.takeDamage(10);
    //scav.print_info();

    /*for (int i = 0; i < 11; i++)
    {
        scav.attack("norminette for the " + std::to_string(i + 1) + " time");
    }*/
    for (int i = 0; i < 11; i++)
    {
        scav.beRepaired(1);
    }
    scav.guardGate();
    return (0);
}