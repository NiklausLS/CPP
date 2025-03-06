/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:43:57 by nileempo          #+#    #+#             */
/*   Updated: 2025/03/04 17:47:26 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed a(0); //0
    std::cout << "a bits = " << a.getRawBits() << std::endl;
    std::cout << "a int = " << a.toInt() << std::endl;

    Fixed b(1); //256 bits
    std::cout << "b bits = " << b.getRawBits() << std::endl;
    std::cout << "b int = " << b.toInt() << std::endl;

    Fixed c(-1); //-256 vits
    std::cout << "c bits = " << c.getRawBits() << std::endl;
    std::cout << "c int = " << c.toInt() << std::endl;

    Fixed d(42); //10752 bits
    std::cout << "d bits = " << d.getRawBits() << std::endl;
    std::cout << "d int = " << d.toInt() << std::endl;

    Fixed e(-5); //-1280 bits
    std::cout << "e bits = " << e.getRawBits() << std::endl;
    std::cout << "e int = " << e.toInt() << std::endl;
    
    /*Fixed f(0.0f);
    std::cout << "f bits = " << f.getRawBits() << std::endl;
    std::cout << "f float = " << f.toFloat() << std::endl;

    Fixed g(1.5f);
    std::cout << "g bits = " << f.getRawBits() << std::endl;
    std::cout << "g float = " << f.toFloat() << std::endl;*/

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