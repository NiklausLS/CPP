/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:27:55 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/17 12:39:13 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    /*harl.debug();
    harl.info();
    harl.warning();
    harl.error();*/

    harl.complain("DEBUG");
    //harl.complain("INFO");
    //harl.complain("WARNING");
    //harl.complain("ERROR");
    //harl.complain("KAREN");
    return (0);
}
