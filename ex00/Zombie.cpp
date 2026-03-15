#include <iostream>
#include <string>
#include "Zombie.hpp"

std::string	Zombie::getName() const
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
