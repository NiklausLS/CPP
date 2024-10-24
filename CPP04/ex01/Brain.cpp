/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 01:47:20 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/24 09:49:03 by nileempo         ###   ########.fr       */
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

std::string Brain::getIdeas(int i) const
{
    if (i >= 0 && i < 100)
        return (this->ideas[i]);
    return ("ERROR: index is out the tab");
}

void Brain::setIdeas(int i, const std::string& ideas)
{
    if (i >= 0 && i < 100)
        this->ideas[i] = ideas;
}
