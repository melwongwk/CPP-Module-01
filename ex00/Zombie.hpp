/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:19:32 by melwong           #+#    #+#             */
/*   Updated: 2026/11/04 15:19:33 by melwong          ###   ########.fr       */
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

		void				announce() const;
		void				setName(const std::string &name);
		const std::string	&getName() const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
