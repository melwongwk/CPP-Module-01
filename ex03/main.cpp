/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:27:53 by melwong           #+#    #+#             */
/*   Updated: 2026/11/05 11:04:30 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		Weapon fist = Weapon("fists");
		Weapon sword = Weapon("\"excalibur\"");

		HumanA	adam("Adam", fist);
		// adam.attack();
		// adam.setWeapon(sword);
		// fist.setType("\"excalibur\"");
		adam.attack();
	}
	{
		Weapon fist = Weapon("fists");
		Weapon sword = Weapon("\"excalibur\"");

		HumanB	tommy("Tommy");
		tommy.setWeapon(fist);
		tommy.attack();
		tommy.setWeapon(sword);
		tommy.attack();
	}
	{
		HumanB	billy("Billy");
		billy.attack();
	}
	return (0);
}
