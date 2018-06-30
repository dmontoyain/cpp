#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#define VAULTENERGYCOST 25
#define ATTACKS_SZ 5
static const std::string attacks[ATTACKS_SZ] = {
    "spit",
    "electric shock",
    "fireball",
    "freeze",
    "shave"
};

class FragTrap {

    public:

        FragTrap ( void );

        FragTrap ( std::string name );

        ~FragTrap ( void );

        FragTrap ( const FragTrap& );

        FragTrap& operator = ( const FragTrap& ft );

        void rangedAttack ( std::string const & target );
        void meleeAttack ( std::string const & target );
        void takeDamage ( unsigned int amount );
        void beRepaired ( unsigned int amount );
        void vaulthunter_dot_exe ( std::string const & target );

    private:

        std::string name;
        unsigned    hp;
        unsigned    maxhp;
        unsigned    ep;
        unsigned    maxep;
        unsigned    level;
        unsigned    meleedamage;
        unsigned    rangeddamage;
        unsigned    armordamage;

};

#endif