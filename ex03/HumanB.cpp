/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:53:30 by melwong           #+#    #+#             */
/*   Updated: 2026/11/04 16:30:56 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
}

const std::string	HumanB::getName()
{
	return (_name);
}

void	HumanB::setName(std::string name)
{
	_name = name;
}

Weapon	*HumanB::getWeapon()
{
	return (_weapon);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << getName() << " attacks with their " << (*_weapon).getType() << std::endl;
	else
		std::cout << getName() << " has no weapon to attack with" << std::endl;
}
