/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:51:03 by nileempo          #+#    #+#             */
/*   Updated: 2025/03/06 22:03:48 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << YELLOW << "Default constructor called" << RESET << std::endl;
    //_value = 0;
    //std::cout << "value = " << _value << std::endl;
}

Fixed::~Fixed()
{
    std::cout << YELLOW << "Destructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << RED << "Copy constructor called"<< RESET << std::endl;
    //this->_value = copy._value;
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
    //this->_value = copy._value;
    _value = copy.getRawBits();
    return (*this);
}
