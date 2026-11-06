/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:27:53 by melwong           #+#    #+#             */
/*   Updated: 2026/11/06 08:57:22 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("HELLO");
	harl.complain("");
	harl.complain("debug");
	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("INFO");
	return (0);
}
