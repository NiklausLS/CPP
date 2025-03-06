/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:37:30 by nileempo          #+#    #+#             */
/*   Updated: 2025/03/02 21:17:45 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap nico("Nicolas");

    //nico.attack("kevin");
    //nico.print_info();
    //nico.takeDamage(10);
    //nico.print_info();
    //nico.beRepaired(3);
    //nico.print_info();

    for (int i = 0; i < 11; i++)
        nico.attack("norminette for the " + std::to_string(i + 1) + " time");
    //for (int i = 0; i < 11; i++)
    //    nico.beRepaired(1);
    nico.print_info();
    return (0);
}