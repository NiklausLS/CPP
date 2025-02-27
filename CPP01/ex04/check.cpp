/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:39:29 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/27 22:34:22 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.hpp"

bool   checkOpenInput(std::ifstream &input, const std::string& filename)
{
    if (!input.is_open())
    {
        std::cerr << RED << "ERROR: open input : " << RESET <<
            YELLOW << filename << RESET << std::endl;
        return (false);
    }
    return (true);
}

bool    checkOpenOutput(std::ofstream& output, const std::string& filename)
{
    if (!output.is_open())
    {
        std::cerr << RED << "ERROR: can't make output file " << RESET <<
            YELLOW << (filename + ".replace") << RESET << std::endl;
        return (false);
    }
    return (true);
}

bool exec(const std::string& filename, const std::string& s1, const std::string& s2)
{
    std::ifstream inputFile(filename.c_str());
    if (!checkOpenInput(inputFile, filename))
        return (false);

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!checkOpenOutput(outputFile, filename))
        return (false);

    std::string line;
    while (getline(inputFile, line))
    {
        line = makeSwap(line, s1, s2);
        if (outputFile.fail())
        {
            std::cerr << RED << "ERROR: Failed to write to output file" << RESET << std::endl;
            inputFile.close();
            outputFile.close();
            return (false);
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();
    return (true);
}


/*
 * Swap values in file
 */
std::string makeSwap(const std::string &line, const std::string &s1, const std::string &s2)
{
    std::string result;
    int start;
    int i;

    start = 0;
    while ((i = line.find(s1, start)) != -1)
    {
        result += line.substr(start, i - start);
        result += s2;
        start = i + s1.length();
    }
    result += line.substr(start);
    return (result);
}
