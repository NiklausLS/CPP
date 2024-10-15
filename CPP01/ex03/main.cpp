/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:58:21 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/15 15:05:40 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    /*Weapon sword("sword");
    Weapon axe("axe");

    std::cout << "Start weapon = " << YELLOW <<sword.getType() << RESET << std::endl;
    sword.setType("spear");
    std::cout << "- New weapon = " << GREEN <<sword.getType() << RESET << std::endl;

    std::cout << "-----------" << std::endl;

    std::cout << "Start weapon = " << YELLOW << axe.getType() << RESET << std::endl;
    axe.setType("bow");
    std::cout << "- New weapon = " << GREEN << axe.getType() << RESET << std::endl;

    std::cout << "-----------" << std::endl;

    HumanA nico("nico", sword);
    nico.attack();

    HumanB kevin("kevin");
    //kevin.setWeapon(sword);
    kevin.attack();*/

    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    } 
    return (0);
}