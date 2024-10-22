/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 01:45:17 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/22 11:29:30 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain(const Brain& copy);

        Brain& operator=(const Brain& copy);

    private:
        std::string ideas[100];
};

#endif
