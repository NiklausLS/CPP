/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:43:57 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/18 15:59:51 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed a(1);
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
    return (0);
}