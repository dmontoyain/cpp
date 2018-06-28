#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
    return ;
}

HumanA::~HumanA (void)
{
    return ;
}

void    HumanA::attack()
{
    std::cout << name + " attacks with a " + weapon.getType() << std::endl;
}