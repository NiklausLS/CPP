/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:37:09 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/15 14:46:40 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        void attack() const;
        void setWeapon(Weapon& weapon);

    private:
        std::string name;
        Weapon* weapon;
};