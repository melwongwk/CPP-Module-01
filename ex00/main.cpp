#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("Peter");
    zombie->announce();
    randomChump("Ben");
    randomChump("Kaine");
    delete (zombie);
    return (0);
}
