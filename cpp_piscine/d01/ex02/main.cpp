#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    Zombie *zombie1;
    Zombie *zombie2;
    ZombieEvent zombieevent;

    zombie1 = zombieevent.randomChump();
    zombieevent.setZombieType("vegetarian");
    zombie2 = zombieevent.newZombie("Bob");

    zombie2->announce();
    delete(zombie1);
    delete(zombie2);
    return 0;
}