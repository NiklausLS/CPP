/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:51:20 by nileempo          #+#    #+#             */
/*   Updated: 2025/03/04 18:14:45 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string RESET = "\033[0m";

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed (const Fixed& copy);
        Fixed& operator=(const Fixed& copy);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed(const int nbr);
        Fixed(const float nbr);
        int toInt( void ) const;
        float toFloat( void ) const;
        
        bool operator>(const Fixed& copy) const;
        bool operator<(const Fixed& copy) const;
        bool operator>=(const Fixed& copy) const;
        bool operator<=(const Fixed& copy) const;
        bool operator==(const Fixed& copy) const;
        bool operator!=(const Fixed& copy) const;

        Fixed operator+(const Fixed& copy) const;
        Fixed operator-(const Fixed& copy) const;
        Fixed operator*(const Fixed& copy) const;
        Fixed operator/(const Fixed& copy) const;

        Fixed operator++(int);
        Fixed operator++();
        Fixed operator--(int);
        Fixed operator--();

        static Fixed& min(Fixed& x, Fixed& y);
        static const Fixed& min(const Fixed& x, const Fixed& y);
        static Fixed& max(Fixed& x, Fixed& y);
        static const Fixed& max(const Fixed& x, const Fixed& y);

    private:
        int _value;
        static const int _bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& nbr);

#endif