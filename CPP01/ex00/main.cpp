/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:34:41 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/14 22:03:38 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie a("A");
    a.announce();
    
    Zombie b("B");
    b.announce();

    Zombie *c = newZombie("C heap");
    c->announce();

    Zombie *d = newZombie("D heap");
    d->announce();

    randomChump("zombie stack");
    delete(c);
    delete(d);
    return(0);
}
