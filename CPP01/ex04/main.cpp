/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:13:12 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/15 16:20:02 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << RED << "ERROR: Arguments count is wrong" << RESET << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::cout << filename << std::endl;
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;

    if (s1.empty())
    {
        std::cerr << RED << "ERROR: s1 can't be empty" << RESET << std::endl;
        return (1);
    }
    std::ifstream openInput;
    std::ofstream openOutput(filename + ".replace");

    if (!checkOpen(filename, openInput))
        return (1);
    replaceOpen(openInput, openOutput, s1, s2);
    openInput.close();
    openOutput.close();
    return (0);
}