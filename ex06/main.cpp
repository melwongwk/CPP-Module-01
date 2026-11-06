/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:27:53 by melwong           #+#    #+#             */
/*   Updated: 2026/11/06 14:42:14 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
	{
		std::cerr << "Usage: ./harlFilter <complain_level>" << std::endl;
		return (EXIT_FAILURE);
	}
	harl.complain(av[1]);
	return (EXIT_SUCCESS);
}
