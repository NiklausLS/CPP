/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:57:45 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/24 10:29:13 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    std::cout << YELLOW << "| Dog constructor" << RESET << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal(copy), brain(new Brain(*copy.brain))
{
    std::cout << YELLOW << "| Dog copy" << RESET << std::endl;
}

Dog::~Dog()
{
    std::cout << YELLOW << "- Dog destructor" << RESET << std::endl;
}

void Dog::makeSound() const
{
    std::cout << PINK << "Woof" << RESET << std::endl;
 }

 void Dog::beGood() const
 {
    std::cout << PINK << type << " wanna be a good boy" << RESET << std::endl;
 }

 Dog& Dog::operator=(const Dog& copy)
 {
    std::cout << YELLOW << "| Dog deep copy" << RESET << std::endl;
    if (this != &copy)
    {
        Animal::operator=(copy);
        delete (brain);
        brain = new Brain(*copy.brain);
    }
    return (*this);
 }

 void Dog::setDogBrain(int index, const std::string& ideas)
 {
    if (brain)
        brain->setIdeas(index, ideas);
 }

std::string Dog::getDogBrain(int index) const
{
    if (brain)
        return (brain->getIdeas(index));
    return (nullptr);
}