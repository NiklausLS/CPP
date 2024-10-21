/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:28:41 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/22 01:05:39 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include <array>
#include <iomanip>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string PINK = "\033[35m";
const std::string RESET = "\033[0m";

class Animal
{
    public:
        Animal();
        Animal(const Animal& copy);
        virtual ~Animal();

        std::string getType() const;
        virtual void makeSound() const;

    protected:
        std::string type;
};

#endif 