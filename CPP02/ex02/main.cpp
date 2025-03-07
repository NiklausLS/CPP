/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:43:57 by nileempo          #+#    #+#             */
/*   Updated: 2025/03/07 12:03:07 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    /*Fixed a(1);
    Fixed b(2);

    std::cout << "a > b = " << (a > b) << std::endl;
    std::cout << "b > a = " << (b > a) << std::endl;
    std::cout << "  ---" << std::endl;
    std::cout << "a < b = " << (a < b) << std::endl;
    std::cout << "b < a = " << (b < a) << std::endl;
    std::cout << "  ---" << std::endl;
    std::cout << "a >= b = " << (a >= b) << std::endl;
    std::cout << "b >= a = " << (b >= a) << std::endl;
    std::cout << "  ---" << std::endl;
    std::cout << "a <= b = " << (a <= b) << std::endl;
    std::cout << "b <= a = " << (b <= a) << std::endl;
    std::cout << "  ---" << std::endl;
    std::cout << "a == b = " << (a == b) << std::endl;
    std::cout << "b == a = " << (b == a) << std::endl;
    std::cout << "  ---" << std::endl;
    std::cout << "a != b = " << (a != b) << std::endl;
    std::cout << "b != a = " << (b != a) << std::endl;
    
    std::cout << "a + b = " << (a + b) << std::endl;
    std::cout << "a - b = " << (a - b) << std::endl;
    std::cout << "a * b = " << (a * b) << std::endl;
    std::cout << "a / b = " << (a + b) << std::endl;*/

    /*Fixed c(0);
    std::cout << "START c = " << c << std::endl;
    std::cout << YELLOW << "c++ = " << c++ << std::endl;
    std::cout << "c = " << c << RESET << std::endl;
    std::cout << RED <<"++c = " << ++c << std::endl;
    std::cout << "c = " << c << RESET << std::endl;
    std::cout << GREEN << "c-- = " << c-- << std::endl;
    std::cout << "c = " << c << RESET << std::endl;
    std::cout << "--c = " << --c << std::endl;
    std::cout << "c = " << c << std::endl;*/

    /*Fixed x(42);
    Fixed y(666.6f);

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl; 
    
    Fixed& min = Fixed::min(x, y);
    std::cout << GREEN << "min = " << min << RESET << std::endl;

    Fixed& max = Fixed::max(x, y);
    std::cout << GREEN << "max = " << max << RESET << std::endl;

    const Fixed i(10);
    const Fixed j(10.5f);
     std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl; 
    const Fixed& constMin = Fixed::min(i, j);
    std::cout << GREEN << "const min = " << constMin << RESET << std::endl;

    const Fixed& constMax = Fixed::max(i, j);
    std::cout << GREEN << "const max = " << constMax << RESET << std::endl;*/

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    
    Fixed zero(0);
    Fixed e(42);
    Fixed mult = e / zero;
    std::cout << "42 / 0 = " << mult << std::endl;
    return (0);
}