/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:57:45 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/22 01:04:41 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Dog.hpp"

Dog::Dog()
{
    std::cout << YELLOW << "Dog constructor" << RESET << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << YELLOW << "Dog copy" << RESET << std::endl;
}

Dog::~Dog()
{
    std::cout << YELLOW << "Dog destructor" << RESET << std::endl;
}

void Dog::makeSound() const
{
    std::cout << PINK << "Woof" << RESET << std::endl;
 }