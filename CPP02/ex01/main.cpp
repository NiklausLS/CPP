/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:43:57 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/18 00:29:17 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed a(0); //0
    std::cout << "a = " << a.getRawBits() << std::endl;
    
    Fixed b(1); //256
    std::cout << "b = " << b.getRawBits() << std::endl;

    Fixed c(-1); //-256
    std::cout << "c = " << c.getRawBits() << std::endl;

    Fixed d(42); //10752
    std::cout << "d = " << d.getRawBits() << std::endl;

    Fixed e(-5); //-1280
    std::cout << "e = " << e.getRawBits() << std::endl;
    
    
    /*Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;*/
    return (0);
}