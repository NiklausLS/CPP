/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:51:20 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/14 17:41:38 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

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

    private:
        int _value;
        static const int _bits = 8;
};

#endif