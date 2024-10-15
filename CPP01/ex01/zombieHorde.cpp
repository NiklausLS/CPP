/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:47:30 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/14 23:21:40 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *horde;

    if (N <= 0)
        return (nullptr);
    horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
        //horde[i].announce();
    }
    return (horde);
}
