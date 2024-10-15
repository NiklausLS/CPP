/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:37:44 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/14 23:54:18 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "The memory address of brain = "
              << &brain << std::endl;

    std::cout << "The memory address held by stringPTR = "
              << stringPTR << std::endl;

    std::cout << "The memory address held by stringREF = "
              << &stringREF << std::endl;
    
    std::cout << "The value of the string variable = "
              << brain << std::endl;
    
    std::cout << "The value pointed to by stringPTR = "
              << *stringPTR << std::endl;

    std::cout << "The value referred to by stringREF = "
              << stringREF << std::endl;
    return (0);
}
