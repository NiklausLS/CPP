/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:51:03 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/19 15:26:37 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    //std::cout << YELLOW << "Default constructor called" << RESET << std::endl;
    _value = 0;
    //std::cout << "value = " << _value << std::endl;
}

Fixed::~Fixed()
{
    //std::cout << YELLOW << "Destructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    //std::cout << RED << "Copy constructor called "<< RESET << std::endl;
    this->_value = copy.getRawBits();
    //std::cout << copy << std::endl;
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
    //std::cout << GREEN << "getRawBits member function called" << RESET << std::endl;
    //std::cout << _value << std::endl;
    //std::cout << "END getRawBits" << std::endl;
    return (this->_value);
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    //std::cout << RED << "Copy assignment operator called" << RESET << std::endl;
    this->_value = copy.getRawBits();
    return (*this);
}

Fixed::Fixed(const int nbr)
{
    //std::cout << YELLOW << "Int constructor called" << RESET << std::endl;
    _value = nbr << _bits;
}

int Fixed::toInt( void ) const
{
    return (_value >> _bits);
}

Fixed::Fixed(const float nbr)
{
    //std::cout << YELLOW << "Float constructor called" << RESET << std::endl;
    _value = roundf(nbr * (1 << _bits));
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

Fixed Fixed::operator+(const Fixed& copy) const
{
    Fixed plus;
    plus.setRawBits(this->_value + copy.getRawBits());
    return (plus);
}

Fixed Fixed::operator-(const Fixed& copy) const
{
    Fixed minus;
    minus.setRawBits(this->_value + copy.getRawBits());
    return (minus);
}

Fixed Fixed::operator*(const Fixed& copy) const
{
    Fixed nbr;
    nbr.setRawBits((this->_value * copy.getRawBits()) >> _bits);
    return (nbr);
}

Fixed Fixed::operator/(const Fixed& copy) const
{
    if (copy.getRawBits() == 0)
    {
        std::cerr << RED << "ERROR: You can't divide a number by 0" << RESET << std::endl;
        return (Fixed(0));
    }
    Fixed nbr;
    nbr.setRawBits(this->_value / copy.getRawBits());
    return (nbr);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++_value;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    --_value;
    return (tmp);
}

Fixed Fixed::operator++()
{
    _value = ++_value;
    return (*this);
}

Fixed Fixed::operator--()
{
    _value = --_value;
    return (*this);
}

Fixed& Fixed::min(Fixed& x, Fixed& y)
{
    if (x < y)
        return (x);
    else
        return (y);
}

const Fixed& Fixed::min(const Fixed& x, const Fixed& y)
{
    if (x < y)
        return (x);
    else
        return (y);
}

Fixed& Fixed::max(Fixed& x, Fixed& y)
{
    if (x > y)
        return (x);
    else
        return (y);
}

const Fixed& Fixed::max(const Fixed& x, const Fixed& y)
{
    if (x > y)
        return (x);
    else
        return (y);
}
