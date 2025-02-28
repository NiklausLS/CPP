/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 07:43:10 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/28 12:21:56 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon& weapon);
        void attack() const;
        void setWeapon(Weapon& weapon);
    
    private:
        std::string name;
        Weapon* weapon;
};

#endif