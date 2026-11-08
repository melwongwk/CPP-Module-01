/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melwong <melwong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:27:53 by melwong           #+#    #+#             */
/*   Updated: 2026/11/08 07:11:27 by melwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

static int	sed(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::ifstream	file(filename.c_str());
	if (!file)
	{
		std::cerr << "Error: cannot open input file '" << filename << "'" << std::endl;
		return (EXIT_FAILURE);
	}

	// read from file into a single string
	std::string	buffer;
	char		c;

	std::getline(file, buffer, '\0');
	if (file.bad())
	{
		std::cerr << "Error: cannot read '" << filename << "'" << std::endl;
		return (EXIT_FAILURE);
	}

	// search for s1 and replace with s2
	std::string::size_type	i;
	i = buffer.find(s1);
	while (i != std::string::npos)
	{
		buffer.erase(i, s1.length());
		buffer.insert(i, s2);
		i = buffer.find(s1, i + s2.length());
	}
	
	// copy the buffer into a new file
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile)
	{
		std::cerr << "Error: cannot create output file '" << filename << ".replace'" << std::endl;
		return (EXIT_FAILURE);
	}
	outfile << buffer;
	if (!outfile)
	{
		std::cerr << "Error: cannot write to '" << filename << ".replace'" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./replace <filename> <string_to_find> <string_to_replace>" << std::endl;
		return (EXIT_FAILURE);
	}
	if (av[2][0] == '\0')
	{
		std::cerr << "Error: <string_to_find> must not be empty" << std::endl;
		return (EXIT_FAILURE);
	}
	return (sed(av[1], av[2], av[3]));
}
