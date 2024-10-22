/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:50:45 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/22 01:04:22 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Animal.hpp"

Animal::Animal() : type("animal")
{
    std::cout << YELLOW << "Animal constructor" << RESET << std::endl;
}

Animal::Animal(const Animal& copy)
{
    std::cout << YELLOW << "Animal copy" << RESET << std::endl;
    (void)copy;
}

Animal::~Animal()
{
    std::cout << YELLOW << "Animal destructor" << RESET << std::endl;
}

std::string Animal::getType() const
{
        return (this->type);
}

void Animal::makeSound() const
{
    std::cout << PINK << "Piou piou" << RESET << std::endl;
 }
