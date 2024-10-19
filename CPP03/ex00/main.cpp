/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:37:30 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/19 16:39:11 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap nico("Nicolas");

    nico.attack("kevin");
    nico.print_info();
    nico.takeDamage(10);
    nico.print_info();
    nico.beRepaired(3);
    nico.print_info();
    return (0);
}