#include "FragTrap.hpp"

FragTrap::FragTrap ( void )
{
    return ;
}

FragTrap::~FragTrap ( void )
{
    return ;
}

FragTrap::FragTrap ( const FragTrap& )
{
    return ;
}

FragTrap::FragTrap& operator = ( const FragTrap& ft )
{
    return ;
}

void FragTrap::rangedAttack ( std::string const & target )
{
    std::cout << "FR4G-TP" + name + " attacks " + target->name + " at range, causing " + rangeddamage + " points of damage !" << std::endl;
}

void FragTrap::meleeAttack ( std::string const & target )
{
    std::cout << "FR4G-TP" + name + " attacks " + target->name + " at range, causing " + meleedamage + " points of damage !" << std::endl;
}

void FragTrap::takeDamage ( unsigned int amount )
{
}

void FragTrap::beRepaired ( unsigned int amount )
{

}

void FragTrap::vaulthunter_dot_exe ( std::string const & target )
{

}