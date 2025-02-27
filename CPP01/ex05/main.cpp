/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:27:55 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/27 22:55:31 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    /*harl.debug();
    harl.info();
    harl.warning();
    harl.error();*/

    std::cout << "-------" << std::endl;
    //harl.complain("debug");
    //harl.complain("DEBUG");
    harl.complain("   ");

    std::cout << "-------" << std::endl;
    harl.complain("INFO");

    std::cout << "-------" << std::endl;
    harl.complain("WARNING");

    std::cout << "-------" << std::endl;
    harl.complain("ERROR");
    
    std::cout << "-------" << std::endl;
    harl.complain("KAREN");
    return (0);
}
