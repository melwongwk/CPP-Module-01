/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:18:52 by melwong           #+#    #+#             */
/*   Updated: 2026/11/04 15:18:53 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{
	private:
		std::string	_name;

	public:
		Zombie();
		~Zombie();

		void		announce() const;
		void		setName(const std::string &name);
		std::string	getName() const;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
