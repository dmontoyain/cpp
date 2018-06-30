#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    _name = "SinNombre";
    _hp = 100;
    _maxhp = 100;
    _ep = 100;
    _maxep = 100;
    _level = 1;
    _meleedamage = 20;
    _rangeddamage = 15;
    _armordamage = 3;

    std::cout << "SC4V-TP <" << _name << "> constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    _name = name;
    _hp = 100;
    _maxhp = 100;
    _ep = 100;
    _level = 1;
    _meleedamage = 20;
    _rangeddamage = 15;
    _armordamage = 3;

    std::cout << "SC4V-TP <" << name << "> constructed" << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "SC4V-TP <" << _name << "> terminated" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& rhs)
{
    *this = rhs;
    std::cout << "SC4V-TP <" << _name << "> replicated from " << rhs._name << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs) {
    _hp = rhs._hp;
    _maxhp = rhs._maxhp;
    _ep = rhs._ep;
    _level = rhs._level;
    _meleedamage = rhs._meleedamage;
    _rangeddamage = rhs._rangeddamage;
    _armordamage = rhs._armordamage;

    std::cout << "SC4V-TP <" << _name << "> stats copied from " << rhs._name << std::endl;
    return *this;
};

void ScavTrap::challengeNewComer( std::string const& target ) {
    std::cout << "SC4V-TP <" << _name << "> challenges <" << target << "> to <" << challenges[rand() % CHALLGS] << ">" << std::endl;
}
