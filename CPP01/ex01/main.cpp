/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:46:29 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/14 23:31:38 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie a;
    a.setName("ALONE");
    a.announce();
    
    int N = 10;
    std::string name = "HORDE";
    Zombie *horde = zombieHorde(N, name);

    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}
