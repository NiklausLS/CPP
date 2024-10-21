/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:37:30 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/20 07:15:48 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << PINK << "--- TEST 1 : constructor ---" << std::endl; 
    FragTrap frag("Nicolas");
    

    //frag.print_info();
    std::cout << PINK << "\n--- TEST 2 : attack ---" << std::endl; 
    frag.attack("kevin");
    frag.attack("anthony");

    std::cout << PINK << "\n--- TEST 3 : beRepaired ---" << std::endl; 
    frag.beRepaired(10);
    //frag.print_info();

    std::cout << PINK << "\n--- TEST 4 : takeDamage ---" << std::endl; 
    frag.takeDamage(10);
    //frag.print_info();

    std::cout << PINK << "\n--- TEST 5 : energy ---" << std::endl; 
    for (int i = 0; i < 200; i++)
    {
        frag.attack("norminette for the " + std::to_string(i + 1) + " time");
    }

    std::cout << PINK << "\n--- TEST 6 : highFivesGuys ---" << std::endl; 
    frag.highFivesGuys();
    return (0);
}