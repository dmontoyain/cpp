#include "FragTrap.hpp"

FragTrap::FragTrap ( void ) : name("no_Name"), hp(100), maxhp(100), ep(100), maxep(100), level(1), meleedamage(30), rangeddamage(20), armordamage(5)
{
    srand(time(0));
    std::cout << name + " FR4G-TP constructed" << std::endl;
}

FragTrap::FragTrap ( std::string name ) : name(name), hp(100), maxhp(100), ep(100), maxep(100), level(1), meleedamage(30), rangeddamage(20), armordamage(5)
{
    srand(time(0));
    std::cout << name + " FR4G-TP constructed" << std::endl;
}

FragTrap::~FragTrap ( void )
{
    std::cout << name + " FR4G-TP terminated" << std::endl;
    return ;
}

FragTrap::FragTrap ( FragTrap const& rhs) : name(rhs.name + " copy")
{
    *this = rhs;
    std::cout << "FR4G-TP <" << name << "> replicated from " << rhs.name << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const& rhs )
{
    hp = rhs.hp;
    maxhp = rhs.maxhp;
    ep = rhs.ep;
    maxep = rhs.maxep;
    level = rhs.level;
    meleedamage = rhs.meleedamage;
    rangeddamage = rhs.rangeddamage;
    armordamage = rhs.armordamage;

    std::cout << "FR4G-TP <" << name << "> stats copied from " << rhs.name << std::endl;
    return *this;
}

void FragTrap::rangedAttack ( std::string const & target )
{
    std::cout << " FR4G-TP " + name + " attacks " + target + " at range, causing " + std::to_string(rangeddamage) + " points of damage !" << std::endl;
}

void FragTrap::meleeAttack ( std::string const & target )
{
    std::cout << " FR4G-TP " + name + " attacks " + target + " at range, causing " + std::to_string(meleedamage) + " points of damage !" << std::endl;
}

void FragTrap::takeDamage ( unsigned int amount )
{
    std::cout << "FR4G-TP <" << name << "> takes <" << amount << "> points of damage" << std::endl;

    if (amount >= hp)
    {

        hp = 0;

        std::cout << "FR4G-TP <" << name << "> has taken critical damage" << std::endl;
    }
    else
    {

        hp -= amount;

        std::cout << "FR4G-TP <" << name << "> has <" << hp << "/" << maxhp << "> HP left" << std::endl;  
    }
}

void FragTrap::beRepaired ( unsigned int amount )
{
    std::cout << "FR4G-TP <" << name << "> restores <" << amount << "> HP" << std::endl;

    if (hp + amount >= maxhp)
    {

        hp = maxhp;
        std::cout << "FR4G-TP <" << name + "> restored to full health < " << maxhp << "/" << maxhp << ">" << std::endl;
    }
    else
    {

        hp += amount;
        std::cout << "FR4G-TP <" << name << "> has <" << hp << "/" << maxhp << "> HP left" << std::endl;
    }
}

void FragTrap::vaulthunter_dot_exe ( std::string const & target )
{
    if (VAULTENERGYCOST > ep)
    {
        std::cout << "FR4G-TP <" << name << "> does not enough energy to use <vaulthunter_dot_exe>" << std::endl;
    }
    else
    {
        ep -= VAULTENERGYCOST;
        std::cout << "FR4G-TP <" << name << "> performs <" << attacks[rand() % ATTACKS_SZ] << "> on <" << target << ">" << std::endl;
    }

    std::cout << "FR4G-TP <" << name << "> has <" << ep << "/ " << maxep << "> energy left" << std::endl;
}