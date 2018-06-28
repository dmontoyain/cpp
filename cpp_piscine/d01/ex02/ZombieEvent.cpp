#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
    this->names[0] = "JOSH";
    this->names[1] = "RAFA";
    this->names[2] = "NINGI";
    this->names[3] = "TRUMP";
    this->names[4] = "BRENDAN";
    return ;
}

ZombieEvent::~ZombieEvent(void) {
    return ;
}

void ZombieEvent::setZombieType(std::string type) {
    this->zombie.set_ZombieType(type);
}

Zombie *ZombieEvent::newZombie(std::string name) {
    Zombie *new_zombie = new Zombie(name);
    new_zombie->set_ZombieType(this->zombie.get_ZombieType());
    return new_zombie;
}

Zombie *ZombieEvent::randomChump(void) {

    int         index;
    std::string name;
    std::string type;

    srand(time(0));
    index = rand() % ZOMBIENAMES;
    std::cout << "index: " +  std::to_string(index) << std::endl;
    name = this->names[index];
    Zombie *newzombie = new Zombie(name);
    if ((type = this->zombie.get_ZombieType()) == ""){
        type = "dead";
    }
    newzombie->set_ZombieType(type);
    newzombie->announce();
    return newzombie;
}