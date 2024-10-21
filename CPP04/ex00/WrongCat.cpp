/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 01:15:37 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/22 01:31:59 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << YELLOW << "Wrong cat constructor" << RESET << std::endl;
    this->type = "wrong cat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
    std::cout << YELLOW << "Wrong cat constructor" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << YELLOW << "Wrong cat destructor" << RESET << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << PINK << "Wrong meow" << RESET << std::endl;
 }