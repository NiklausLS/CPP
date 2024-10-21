/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:50:09 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/22 01:06:41 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrong animal")
{
    std::cout << YELLOW << "Wrong Animal constructor" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    std::cout << YELLOW << "Wrong Animal copy" << RESET << std::endl;
    type = copy.type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << YELLOW << "Wrong Animal Destructor" << RESET << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << PINK << "Ouba ouba" << RESET << std::endl;
 }
 

std::string WrongAnimal::getType() const
{
        return (this->type);
}