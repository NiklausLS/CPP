/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:27:02 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/22 11:23:42 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Animal.hpp"
#include "./includes/Dog.hpp"
#include "./includes/Cat.hpp"

int main()
{
    std::cout << "-- TESTING ANIMALS --" << std::endl;
    Animal* animals[4];

    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();
    for (int i = 2; i < 4; i++)
        animals[i] = new Cat();

    std::cout << "-- TESTING SOUNDS --" << std::endl;
    for(int i = 0; i < 4; i++)
        animals[i]->makeSound();

    std::cout << "-- DELETING ANIMALS --" << std::endl;
    for (int i = 0; i < 4; i++)
        delete (animals[i]);

    return (0);
}