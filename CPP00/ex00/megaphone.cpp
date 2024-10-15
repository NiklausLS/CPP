/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:17:35 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/14 09:19:26 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (i < argc)
		{
			std::string str(argv[i]);
			j = 0;
			while (j < str.length())
			{
				std::cout << (char)std::toupper(str[j]);
				j++;
			}
			i++;
		}
	}
	return (0);
}
