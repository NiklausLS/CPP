/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:27:44 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/22 01:04:34 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Cat.hpp"

Cat::Cat()
{
    std::cout << YELLOW << "Cat constructor" << RESET << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << YELLOW << "Cat constructor" << RESET << std::endl;
}

Cat::~Cat()
{
    std::cout << YELLOW << "Cat destructor" << RESET << std::endl;
}

void Cat::makeSound() const
{
    std::cout << PINK << "Meow" << RESET << std::endl;
 }