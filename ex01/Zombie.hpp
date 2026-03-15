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
