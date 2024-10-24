/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:27:44 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/24 10:29:56 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    std::cout << YELLOW << "| * Cat constructor" << RESET << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy), brain(new Brain(*copy.brain))
{
    std::cout << YELLOW << "| ** Cat copy" << RESET << std::endl;
}

Cat::~Cat()
{
    std::cout << YELLOW << "* Cat destructor" << RESET << std::endl;
}

void Cat::makeSound() const
{
    std::cout << PINK << "Meow" << RESET << std::endl;
}

void Cat::beBad() const
{
    std::cout << PINK << type << "wanna break something" << RESET << std::endl;
}

 Cat& Cat::operator=(const Cat& copy)
 {
    std::cout << YELLOW << "Cat deep copy" << RESET << std::endl;
    if (this != &copy)
    {
        Animal::operator=(copy);
        delete (brain);
        brain = new Brain(*copy.brain);
    }
    return (*this);
 }

  void Cat::setCatBrain(int index, const std::string& ideas)
 {
    if (brain)
        brain->setIdeas(index, ideas);
 }

std::string Cat::getCatBrain(int index) const
{
    if (brain)
        return (brain->getIdeas(index));
    return (nullptr);
}