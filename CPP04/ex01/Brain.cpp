/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 01:47:20 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/22 11:11:52 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Brain.hpp"

Brain::Brain()
{
    std::cout << YELLOW << "brain constructor" << RESET << std::endl;
}

Brain::Brain(const Brain& copy)
{
    std::cout << YELLOW << "brain copy" << RESET << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout << YELLOW << "brain destructor" << RESET << std::endl;
}

Brain& Brain::operator=(const Brain& copy)
{
    std::cout << YELLOW << "brain deep copy operator" << RESET << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}
