/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:39:29 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/15 16:16:00 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include "check.hpp"

bool    checkOpen(const std::string &filename, std::ifstream &openInput)
{
    openInput.open(filename);
    if (!openInput.is_open())
    {
        std::cerr << RED << "ERROR: s1 open failed" << RESET << std::endl;
        return (false);
    }
    return (true);
}

void    replaceOpen(std::ifstream &openInput, std::ofstream &output, 
    const std::string &s1, const std::string &s2)
{
    std::string line;
    std::size_t i;

    while (std::getline(openInput, line))
    {
        i = 0;
        while ((i = line.find(s1, i)) != std::string::npos)
        {
            line.erase(i, s1.length());
            line.insert(i, s2);
            i +=  s2.length();
        }
        output << line << std::endl;
    }
}
