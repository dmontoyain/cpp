#include "Zombie.hpp"

Zombie::Zombie(){
    return;
}

Zombie::~Zombie(){
    std::cout << "Zombie destroyed." << std::endl;
    return;
}

Zombie::Zombie(std::string name) : name(name) {
    return ;
}

void Zombie::announce(void) {
    std::cout << this->name + " <" + this->type + "> Buuu! Aima Zombie!" << std::endl;
}

void Zombie::set_ZombieName(std::string name) {
    this->name = name;
}

void Zombie::set_ZombieType(std::string type) {
    this->type = type;
}

std::string Zombie::get_ZombieName(void) {
    return this->name;
}

std::string Zombie::get_ZombieType(void) {
    return this->type;
}

Zombie *Zombie::newZombie(std::string name) {
    Zombie *new_zombie = new Zombie(name);
    return new_zombie;
}