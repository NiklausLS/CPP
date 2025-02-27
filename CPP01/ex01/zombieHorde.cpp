/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:47:30 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/22 23:13:48 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *horde;

    if (N <= 0 || N >= 2147483647)
        return (NULL);
    try
    {
        horde = new Zombie[N];
        for (int i = 0; i < N; i++)
        {
            horde[i].setName(name);
            //horde[i].announce();
        }
    }
    catch (const std::bad_alloc&)
    {
        return (NULL);
    }
    return (horde);
}
