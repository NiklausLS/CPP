/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:08:31 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/25 18:11:21 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>
#include <iostream>
#include <array>
#include <iomanip>
#include "AMateria.hpp"

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string PINK = "\033[35m";
const std::string RESET = "\033[0m";

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        //virtual void equip(AMateria* m) = 0;
        //virtual void unequip(int idx) = 0;
        //virtual void use(int idx, ICharacter& target) = 0;
};

#endif