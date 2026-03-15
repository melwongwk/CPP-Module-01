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
