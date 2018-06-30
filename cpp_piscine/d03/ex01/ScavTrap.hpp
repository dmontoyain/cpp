#ifndef SCAVTRAP_CLASS_H
#define SCAVTRAP_CLASS_H

#include "FragTrap.hpp"
#define CHALLGS 5
static const std::string challenges[CHALLGS] = {
    "DRINK A CUP OF COFFEE MIXED WITH AN ENERGY DRINK AND A 5-HOUR EMERGY",
    "RUN 10 MILES",
    "24 HOUR SQUAT",
    "HEAR LOUD RAP MUSIC FOR 1 WEEK (nonstop)",
    "REQUEST MORE THAN 4 ROOMATES IN YOUR DORM"
};

class ScavTrap {
    
    public:
    
        ScavTrap ( void );
        ScavTrap ( std::string name );
        ~ScavTrap ( void );
        ScavTrap(ScavTrap const& rhs);
        ScavTrap& operator=( ScavTrap const& rhs );

        void    rangedAttack( std::string const& target );
        void    meleeAttack( std::string const& target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
        void    challengeNewComer( std::string const& target );

    private:

        std::string name;
        unsigned    hp;
        unsigned    maxhp;
        unsigned    ep;
        unsigned    level;
        unsigned    meleedamage;
        unsigned    rangeddamage;
        unsigned    armordamage;
};

#endif