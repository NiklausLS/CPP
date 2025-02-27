/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:48:10 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/24 10:26:30 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& copy);
        ~Dog();
        
        void makeSound() const;
        void beGood() const;

        Dog& operator=(const Dog& copy);

        std::string getDogBrain(int index) const;
        void setDogBrain(int index, const std::string& ideas);
    private:
        Brain* brain;
};

#endif
