/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:35:19 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/14 23:22:59 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) :name(name)
{
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << ": has returned to the grave" << std::endl;
}
