/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:48:10 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/22 01:13:18 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& copy);
        ~Dog();
        
        void makeSound() const;
};

#endif