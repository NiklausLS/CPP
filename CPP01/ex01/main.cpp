/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:46:29 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/27 14:25:04 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie a;
    a.setName("ALONE");
    a.announce();
    
    int N = 10;
    //int N = -10;
    //int N = 2147483647;
    //int N = -2147483648;
    std::string name = "HORDE";
    Zombie *horde = zombieHorde(N, name);

    for (int i = 0; i < N; i++)
    {
        std::cout << "[" << i + 1 << "] ";
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}
