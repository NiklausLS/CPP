/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:43:57 by nileempo          #+#    #+#             */
/*   Updated: 2025/03/06 19:31:14 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    /*Fixed a;

    std::cout << "BEFORE a = " << a.getRawBits() << std::endl;
    a.setRawBits(1);
    std::cout << "AFTER setRawBits a = " << a.getRawBits() << std::endl;
    
    Fixed b( a );
    std::cout << "b copy a = " << b.getRawBits() << std::endl;
    
    Fixed c;
    std::cout << "BEFORE c = " << c.getRawBits() << std::endl;
    c = b;
    std::cout << "AFTER c = " << c.getRawBits() << std::endl;*/

    /*a.setRawBits(-666);
    b.setRawBits(42);
    std::cout << "a = " << a.getRawBits() << std::endl;
    std::cout << "b = " << b.getRawBits() << std::endl;*/
    
    Fixed a;
    Fixed b( a );
    Fixed c;

    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return (0);
}