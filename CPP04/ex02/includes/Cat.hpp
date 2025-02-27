/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:28:22 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/24 10:26:28 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &copy);
        ~Cat();
        
        void makeSound() const;
        void beBad() const;
    
        Cat& operator=(const Cat& copy);

        std::string getCatBrain(int index) const;
        void setCatBrain(int index, const std::string& ideas);
    private:
        Brain* brain;
};

#endif
