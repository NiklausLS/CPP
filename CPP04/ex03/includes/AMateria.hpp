/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:15:02 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/24 13:06:30 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include <array>
#include <iomanip>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string PINK = "\033[35m";
const std::string RESET = "\033[0m";

class AMateria
{
    protected:

    public:
       // AMateria(std::string const & type);
       // virtual ~AMateria();
        
        //std::string const & getType() const; //Returns the materia type
        //virtual AMateria* clone() const = 0;
        //virtual void use(ICharacter& target);

};

#endif