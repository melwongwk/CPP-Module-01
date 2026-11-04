/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:55:20 by melwong           #+#    #+#             */
/*   Updated: 2026/11/04 16:54:09 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(const std::string &type): _type(type)
{
}

const std::string	&Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(const std::string &type)
{
	_type = type;
}
