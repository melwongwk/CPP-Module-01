/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:19:07 by melwong           #+#    #+#             */
/*   Updated: 2026/11/04 15:19:08 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int		n = 10;
    Zombie  *horde = zombieHorde(n, "Jeff");
	
	for (int i = 0; i < n; i++)
		horde[i].announce();
    delete[] (horde);

    return (0);
}
