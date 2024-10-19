/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:51:03 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/18 15:59:00 by nileempo         ###   ########.fr       */
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
    std::cout << RED << "Copy constructor called "<< RESET << std::endl;
    this->_value = copy.getRawBits();
    //std::cout << copy << std::endl;
}

void    Fixed::setRawBits(int const nbr)
{
    std::cout << "START setRawBits" << std::endl;
    this->_value = nbr;
    //std::cout << "nbr = " << nbr << std::endl;
    //std::cout << "END setRawBits" << std::endl;
}

int     Fixed::getRawBits( void ) const
{
    //std::cout << GREEN << "getRawBits member function called" << RESET << std::endl;
    //std::cout << _value << std::endl;
    //std::cout << "END getRawBits" << std::endl;
    return (this->_value);
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << RED << "Copy assignment operator called" << RESET << std::endl;
    this->_value = copy.getRawBits();
    return (*this);
}

Fixed::Fixed(const int nbr)
{
    std::cout << YELLOW << "Int constructor called" << RESET << std::endl;
    _value = nbr << _bits;
}

int Fixed::toInt( void ) const
{
    return (_value >> _bits);
}

Fixed::Fixed(const float nbr)
{
    std::cout << YELLOW << "Float constructor called" << RESET << std::endl;
    _value = roundf(nbr *(1 << _bits));
}

float   Fixed::toFloat( void ) const
{
    return((float)_value / (1 <<_bits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& nbr)
{
    out << nbr.toFloat();
    return (out);
}

bool Fixed::operator>(const Fixed& copy) const
{
    return (this->_value > copy._value);
}

bool Fixed::operator<(const Fixed& copy) const
{
    return (this->_value < copy._value);
}

bool Fixed::operator>=(const Fixed& copy) const
{
    return (this->_value >= copy._value);
}

bool Fixed::operator<=(const Fixed& copy) const
{
    return (this->_value <= copy._value);
}

bool Fixed::operator==(const Fixed& copy) const
{
    return (this->_value == copy._value);
}

bool Fixed::operator!=(const Fixed& copy) const
{
    return (this->_value != copy._value);
}
