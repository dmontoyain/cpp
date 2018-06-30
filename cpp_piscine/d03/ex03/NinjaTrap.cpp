#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap ( void ) {
    _name = "SinNombre";
    _hp = 60;
    _maxhp = 60;
    _ep = 120;
    _maxep = 120;
    _level = 1;
    _meleedamage = 60;
    _rangeddamage = 5;
    _armordamage = 0;

    std::cout << _name + " NinjaTrap constructed" << std::endl;
}

NinjaTrap::NinjaTrap ( std::string name ) {
    _name = name;
    _hp = 60;
    _maxhp = 60;
    _ep = 120;
    _maxep = 120;
    _level = 1;
    _meleedamage = 60;
    _rangeddamage = 5;
    _armordamage = 0;

    std::cout << _name + " NinjaTrap constructed" << std::endl;
}

NinjaTrap::~NinjaTrap ( void ) {
    std::cout << "NinjaTrap deconstructed." << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const& rhs ) {
    _name = rhs._name + " copy";
    *this = rhs;

    std::cout << "NinjaTrap <" << _name << "> replicated from " << rhs._name << std::endl;
}

NinjaTrap& NinjaTrap::operator=( NinjaTrap const& rhs ) {
    _hp = rhs._hp;
    _maxhp = rhs._maxhp;
    _ep = rhs._ep;
    _maxep = rhs._maxep;
    _level = rhs._level;
    _meleedamage = rhs._meleedamage;
    _rangeddamage = rhs._rangeddamage;
    _armordamage = rhs._armordamage;

    std::cout << "NinjaTrap <" << _name << "> stats copied from " << rhs._name << std::endl;
    
    return *this;
}

void    NinjaTrap::ninjaShoebox(NinjaTrap &attack) {
    std::cout << "The ninja " + attack.getName() + " is attacking Ninja " << _name << std::endl;
}

void    NinjaTrap::ninjaShoebox(ClapTrap &attack) {
    std::cout << "The claptrap " + attack.getName() + " is attacking Ninja " << _name << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap &attack) {
    std::cout << "A FragTrap " + attack.getName() + " is attacking Ninja " << _name << std::endl;
}

void    NinjaTrap::ninjaShoebox(ScavTrap &attack) {
    std::cout << "A ScavTrap " + attack.getName() + " is attacking Ninja " << _name << std::endl;
}