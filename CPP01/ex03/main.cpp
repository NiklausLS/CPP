/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:58:21 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/15 07:19:43 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main()
{
    Weapon sword("sword");
    Weapon axe("axe");

    std::cout << "Start weapon = " << YELLOW <<sword.getType() << RESET << std::endl;
    sword.setType("spear");
    std::cout << "- New weapon = " << GREEN <<sword.getType() << RESET << std::endl;

    std::cout << "-----------" << std::endl;

    std::cout << "Start weapon = " << YELLOW << axe.getType() << RESET << std::endl;
    axe.setType("bow");
    std::cout << "- New weapon = " << GREEN << axe.getType() << RESET << std::endl;

    std::cout << "-----------" << std::endl;

    
    return (0);
}