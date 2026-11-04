/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:19:35 by melwong           #+#    #+#             */
/*   Updated: 2026/11/04 15:19:36 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

const std::string	&Zombie::getName() const
{
	return (_name);
}

void	Zombie::setName(const std::string &name)
{
	_name = name;
}

void	Zombie::announce() const
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << getName() << " is destroyed!" << std::endl;
}
