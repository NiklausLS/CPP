/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:59:04 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/15 07:12:03 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <iomanip>
#include <string>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string RESET = "\033[0m";

class Weapon
{
    public:
        Weapon(const std::string &type);
        ~Weapon();
        
        const std::string& getType() const;

        void setType(const std::string& newType);

    private:
        std::string type;
};

#endif