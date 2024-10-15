/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:47:35 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/15 07:12:42 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie();
        void    announce() const;
        void    setName(std::string name);
};

Zombie *zombieHorde( int N, std::string name);

#endif