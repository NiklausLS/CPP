/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:13:12 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/27 22:43:34 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << RED << "ERROR: Arguments count is wrong" << RESET << std::endl;
        return (1);
    }
    const std::string filename = argv[1];
    const std::string s1 = argv[2];
    const std::string s2 = argv[3];

    //std::cout << filename << std::endl;
    //std::cout << s1 << std::endl;
    //std::cout << s2 << std::endl;

    if (s1.empty())
    {
        std::cerr << RED << "ERROR: s1 can't be empty" << RESET << std::endl;
        return (1);
    }

    if (!exec(filename, s1, s2))
        return (1);
    return (0);
}