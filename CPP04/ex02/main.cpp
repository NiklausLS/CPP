/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:27:02 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/24 11:59:52 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Animal.hpp"
#include "./includes/Dog.hpp"
#include "./includes/Cat.hpp"

int main()
{
    //std::cout << "-- TESTING BRAIN --" << std::endl;
    //Brain brain;
    //brain.

    /*std::cout << "-- TEST DOG --" << std::endl;
    Dog dog;
    dog.makeSound();
    dog.beGood();
    std::cout << "-------------" << std::endl;

    dog.setDogBrain(0, "I want food");
    dog.setDogBrain(1, "I want to run");
    dog.setDogBrain(2, "I want to sleep");
    std::cout << "Dog idea 0 = " << dog.getDogBrain(0) << std::endl;
    std::cout << "Dog idea 1 = " << dog.getDogBrain(1) << std::endl;
    std::cout << "Dog idea 2 = " << dog.getDogBrain(2) << std::endl;
    std::cout << "-------------" << std::endl;

    Dog dog2(dog);
    dog2.makeSound();
    dog2.beGood();
    std::cout << "-------------" << std::endl;

    std::cout << "Dog 2 idea 0 = " << dog.getDogBrain(0) << std::endl;
    std::cout << "Dog 2 idea 1 = " << dog.getDogBrain(1) << std::endl;
    std::cout << "Dog 2 idea 2 = " << dog.getDogBrain(2) << std::endl;

    std::cout << "-------------" << std::endl;
    dog.setDogBrain(0, "I want attention");
    std::cout << "Dog idea 0 = " << dog.getDogBrain(0) << std::endl;
    std::cout << "Dog 2 idea 0 = " << dog2.getDogBrain(0) << std::endl;
    Dog dog3;
    dog3 = dog;
    dog3.makeSound();
    dog3.beGood();

    std::cout << "\n-- TEST CAT --" << std::endl;
    Cat cat;
    cat.makeSound();
    cat.beBad();

    Cat cat2;
    cat2 = cat;
    cat2.makeSound();
    cat2.beBad();*/

    std::cout << "\n-- TEST ANIMALS --" << std::endl;
    Animal* animals[10];

    for (int i = 0; i < 5; i++)
        animals[i] = new Dog();
    for (int i = 2; i < 10; i++)
        animals[i] = new Cat();

    std::cout << "\n-- TEST IDEAS --" << std::endl;
    for(int i = 0; i < 4; i++)
        animals[i]->makeSound();

    std::cout << "\n-- DELETE ANIMALS --" << std::endl;
    for (int i = 0; i < 4; i++)
        delete (animals[i]);

    return (0);
}