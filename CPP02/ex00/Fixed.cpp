/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:51:03 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/14 17:59:28 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << YELLOW << "Default constructor called" << RESET << std::endl;
    _value = 0;
    //std::cout << "value = " << _value << std::endl;
}

Fixed::~Fixed()
{
    std::cout << YELLOW << "Destructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << RED << "Copy constructor called"<< RESET << std::endl;
    *this = copy;
}

void    Fixed::setRawBits(int const nbr)
{
    //std::cout << "START setRawBits" << std::endl;
    this->_value = nbr;
    //std::cout << "nbr = " << nbr << std::endl;
    //std::cout << "END setRawBits" << std::endl;
}

int     Fixed::getRawBits( void ) const
{
    std::cout << GREEN << "getRawBits member function called" << RESET << std::endl;
    return (this->_value);
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << RED << "Copy assignment operator called" << RESET << std::endl;
    if(this != &copy)
        this->_value = copy.getRawBits();
    return (*this);
}
