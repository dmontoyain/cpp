#include "FragTrap.hpp"

FragTrap::FragTrap ( void ) {
    srand(time(0));
    _name = "SinNombre";
    _hp = 100;
    _maxhp = 100;
    _ep = 100;
    _level = 1;
    _meleedamage = 30;
    _rangeddamage = 20;
    _armordamage = 5;

    std::cout << _name + " FR4G-TP constructed" << std::endl;
}

FragTrap::FragTrap ( std::string name ) {
    srand(time(0));
    _name = "SinNombre";
    _hp = 100;
    _maxhp = 100;
    _ep = 100;
    _level = 1;
    _meleedamage = 30;
    _rangeddamage = 20;
    _armordamage = 5;
    std::cout << name + " FR4G-TP constructed" << std::endl;
}

FragTrap::~FragTrap ( void ) {
    std::cout << _name + "FR4G-TP terminated" << std::endl;
    return ;
}

FragTrap::FragTrap ( FragTrap const& rhs) {
    *this = rhs;
    std::cout << "FR4G-TP <" << _name << "> replicated from " << rhs._name << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const& rhs ) {
    _hp = rhs._hp;
    _maxhp = rhs._maxhp;
    _ep = rhs._ep;
    _level = rhs._level;
    _meleedamage = rhs._meleedamage;
    _rangeddamage = rhs._rangeddamage;
    _armordamage = rhs._armordamage;

    std::cout << "FR4G-TP <" << _name << "> stats copied from " << rhs._name << std::endl;
    return *this;
}

void FragTrap::vaulthunter_dot_exe ( std::string const & target ) {
    if (VAULTENERGYCOST > _ep)
    {
        std::cout << "FR4G-TP <" << _name << "> does not enough energy to use <vaulthunter_dot_exe>" << std::endl;
    }
    else
    {
        _ep -= VAULTENERGYCOST;
        std::cout << "FR4G-TP <" << _name << "> performs <" << attacks[rand() % ATTACKS_SZ] << "> on <" << target << ">" << std::endl;
    }

    std::cout << "FR4G-TP <" << _name << "> has <" << _ep << "/ 100" << "> energy left" << std::endl;
}