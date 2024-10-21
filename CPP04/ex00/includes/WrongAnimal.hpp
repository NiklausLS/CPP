/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:50:31 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/22 00:55:45 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        ~WrongAnimal();
        
        std::string getType() const;
        void makeSound() const;
    
    protected:
        std::string type;
};

#endif