/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:41:34 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/15 16:16:40 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_HPP
# define CHECK_HPP
#include "sed.hpp"

bool    checkOpen(const std::string &filename, std::ifstream &openInput);
void    replaceOpen(std::ifstream &openInput, std::ofstream &output, 
            const std::string &s1, const std::string &s2);
#endif