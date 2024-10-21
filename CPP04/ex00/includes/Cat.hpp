/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:28:22 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/22 01:13:41 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &copy);
        ~Cat();
        
        void makeSound() const;
};

#endif
