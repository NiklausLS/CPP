/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:27:02 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/22 01:31:40 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Animal.hpp"
#include "./includes/Dog.hpp"
#include "./includes/Cat.hpp"
#include "./includes/WrongAnimal.hpp"
#include "./includes/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    std::cout << "meta type = " << GREEN <<meta->getType() << RESET << std::endl;
    meta->makeSound();

    const Animal* j = new Animal();
    std::cout << "dog type = " << GREEN << j->getType() << RESET << std::endl;
    j->makeSound();

    j = new Dog();
    std::cout << "dog type = " << GREEN << j->getType() << RESET << std::endl;
    j->makeSound();
    
    const Animal* i = new Cat();
    std::cout << "cat type = " << GREEN << i->getType() << RESET << std::endl;
    i->makeSound();

    const WrongAnimal* w = new WrongAnimal();
    std::cout << "wrong animal type = " << GREEN << w->getType() << RESET << std::endl;
    w->makeSound();
    
    const WrongAnimal* wcat = new WrongCat();
    std::cout << "wrong cat type = " << GREEN << wcat->getType() << RESET << std::endl;
    wcat->makeSound();

    delete (meta);
    delete (j);
    delete (i);
    delete (w);
    delete (wcat);
    return (0);
}