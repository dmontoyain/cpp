#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : name("noname"), hp(100), maxhp(100), ep(100), level(1), meleedamage(20), rangeddamage(15), armordamage(3)
{
    std::cout << "SC4V-TP <" << name << "> constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : name(name), hp(100), maxhp(100), ep(100), level(1), meleedamage(20), rangeddamage(15), armordamage(3)
{
    std::cout << "SC4V-TP <" << name << "> constructed" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "SC4V-TP <" << name << "> terminated" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& rhs) : name(rhs.name + " copy") {
    *this = rhs;
    std::cout << "SC4V-TP <" << name << "> replicated from " << rhs.name << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs) {
    hp = rhs.hp;
    maxhp = rhs.maxhp;
    ep = rhs.ep;
    level = rhs.level;
    meleedamage = rhs.meleedamage;
    rangeddamage = rhs.rangeddamage;
    armordamage = rhs.armordamage;

    std::cout << "SC4V-TP <" << name << "> stats copied from " << rhs.name << std::endl;
    return *this;
};

void ScavTrap::rangedAttack ( std::string const & target )
{
    std::cout << "SC4V-TP " + name + " attacks " + target + " at range, causing " + std::to_string(rangeddamage) + " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack ( std::string const & target )
{
    std::cout << "SC4V-TP " + name + " attacks " + target + " at range, causing " + std::to_string(meleedamage) + " points of damage !" << std::endl;
}

void ScavTrap::takeDamage ( unsigned int amount )
{
    std::cout << "SC4V-TP <" << name << "> takes <" << amount << "> points of damage" << std::endl;

    if (amount >= hp)
    {

        hp = 0;

        std::cout << "SC4V-TP <" << name << "> has taken critical damage" << std::endl;
    }
    else
    {

        hp -= amount;

        std::cout << "SC4V-TP <" << name << "> has <" << hp << "/" << maxhp << "> HP left" << std::endl;  
    }
}

void ScavTrap::beRepaired ( unsigned int amount )
{
    std::cout << "SC4V-TP <" << name << "> restores <" << amount << "> HP" << std::endl;

    if (hp + amount >= maxhp)
    {

        hp = maxhp;
        std::cout << "SC4V-TP <" << name + "> restored to full health < " << maxhp << "/" << maxhp << ">" << std::endl;
    }
    else
    {

        hp += amount;
        std::cout << "SC4V-TP <" << name << "> has <" << hp << "/" << maxhp << "> HP left" << std::endl;
    }
}

void ScavTrap::challengeNewComer( std::string const& target )
{
    std::cout << "SC4V-TP <" << name << "> challenges <" << target << "> to <" << challenges[rand() % CHALLGS] << ">" << std::endl;
}
