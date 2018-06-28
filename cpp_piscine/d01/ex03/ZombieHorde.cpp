#include "ZombieHorde.hpp"

void ZombieHorde::createZombieHorde()
{
    int index;
    std::string name;
    Zombie *zombies = new Zombie[N];

    srand(time(0));
    for (int i = 0; i < N; i++){
        
        index = rand() % MAXZOMBIES;
        name = names[index];
        zombies[i].set_ZombieName(name);
        zombies[i].set_ZombieType("vegan");
    }
    this->zombie = zombies;
}

ZombieHorde::ZombieHorde(int N) : N(N)
{
    createZombieHorde();
    return ;
}

ZombieHorde::~ZombieHorde(void) {
    for(int i = 0; i < N; i++) {
        delete (&zombie[i]);
    }
    return ;
}

void    ZombieHorde::announce() {
    for(int i = 0; i < N; i++) {
        zombie[i].announce();
    }
}
