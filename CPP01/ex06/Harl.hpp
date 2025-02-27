/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:26:31 by nileempo          #+#    #+#             */
/*   Updated: 2025/02/27 23:01:30 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>
#include <fstream>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string RESET = "\033[0m";

enum Level
{
    DEBUG = 0,
    INFO,
    WARNING,
    ERROR
};

class Harl
{
    public:
        Harl();
        ~Harl();
        void complain( std::string level );

    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        void karen( void );
        int  makeLevel(std::string level);
};

#endif
