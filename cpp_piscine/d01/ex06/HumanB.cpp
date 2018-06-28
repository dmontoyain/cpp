#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    return ;
}

HumanB::~HumanB (void)
{
    return ;
}

void    HumanB::attack()
{
    std::cout << name + "attacks with a " + weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->weapon = &weapon;
}