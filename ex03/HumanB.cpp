/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:53:30 by melwong           #+#    #+#             */
/*   Updated: 2026/11/05 08:54:04 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string &name): _name(name), _weapon(NULL)
{
}

const std::string	&HumanB::getName() const
{
	return (_name);
}

void	HumanB::setName(const std::string &name)
{
	_name = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon to attack with" << std::endl;
}
