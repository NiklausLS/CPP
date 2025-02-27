/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:41:34 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/27 22:45:06 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_HPP
# define CHECK_HPP

#include <string>
#include <fstream>
#include <iostream>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string RESET = "\033[0m";

//checkers
bool    checkOpenInput(std::ifstream &input, std::string& filename);
bool    checkOpenOutput(std::ofstream& output, std::string& filename);

//exec
bool exec(const std::string& filename, const std::string& s1, const std::string& s2);
std::string makeSwap(const std::string &line, const std::string &s1, const std::string &s2);

#endif