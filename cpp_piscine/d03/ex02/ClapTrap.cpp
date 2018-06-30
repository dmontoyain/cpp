#include "ClapTrap.hpp"

ClapTrap::ClapTrap (void)  {
    std::cout << "Called ClapTrap Destroyer" << std::endl;
}

ClapTrap::~ClapTrap (void) {
    std::cout << "Called ClapTrap Destroyer" << std::endl;
}

std::string ClapTrap::getName() {
    return _name;
}

unsigned    ClapTrap::getHp() {
    return _hp;
}

unsigned    ClapTrap::getMaxHp() {
    return _maxhp;
}

unsigned    ClapTrap::getEp() {
    return _ep;
}

unsigned    ClapTrap::getLevel() {
    return _level;
}

unsigned    ClapTrap::getMeleeDamage() {
    return _meleedamage;
}

unsigned    ClapTrap::getRangeDamage() {
    return _rangeddamage;
}

unsigned    ClapTrap::getArmorDamage() {
    return _armordamage;
}

void        ClapTrap::setName( std::string name ) {
    _name = name;
}

void        ClapTrap::setHp( unsigned hp ) {
    _hp = hp;
}

void        ClapTrap::setMaxHp( unsigned maxhp ) {
    _maxhp = maxhp;
}

void        ClapTrap::setEp( unsigned ep ) {
    _ep = ep;
}

void        ClapTrap::setLevel( unsigned lvl ) {
    _level = lvl;
}

void        ClapTrap::setMeleeDamage( unsigned meleedamage ) {
    _meleedamage = meleedamage;
}

void        ClapTrap::setRangeDamage( unsigned rangedamage ) {
    _rangeddamage = rangedamage;
}

void        ClapTrap::setArmorDamage( unsigned armordamage ) {
    _armordamage = armordamage;
}

void        ClapTrap::rangedAttack ( std::string const & target )
{
    std::cout << "<" << _name + " attacks " + target + " at range, causing " + std::to_string(_rangeddamage) + " points of damage !" << std::endl;
}

void        ClapTrap::meleeAttack ( std::string const & target )
{
    std::cout << "<" << _name + " attacks " + target + " at range, causing " + std::to_string(_meleedamage) + " points of damage !" << std::endl;
}

void        ClapTrap::takeDamage ( unsigned int amount )
{
    std::cout << "<" << _name << "> takes <" << amount << "> points of damage" << std::endl;

    if (amount >= _hp)
    {

        _hp = 0;

        std::cout << "<" << _name << "> has taken critical damage" << std::endl;
    }
    else
    {

        _hp -= amount;

        std::cout << "<" << _name << "> has <" << _hp << "/" << _maxhp << "> HP left" << std::endl;  
    }
}

void        ClapTrap::beRepaired ( unsigned int amount )
{
    std::cout << "<" << _name << "> restores <" << amount << "> HP" << std::endl;

    if (_hp + amount >= _maxhp)
    {

        _hp = _maxhp;

        std::cout << "<" << _name + "> restored to full health <" << _maxhp << "/" << _maxhp << ">" << std::endl;
    }
    else
    {

        _hp += amount;

        std::cout << "<" << _name << "> has <" << _hp << "/" << _maxhp << "> HP left" << std::endl;
    }
}
