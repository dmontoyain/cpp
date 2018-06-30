#ifndef SCAVTRAP_CLASS_H
#define SCAVTRAP_CLASS_H

#include "ClapTrap.hpp"

#define CHALLGS 5

static const std::string challenges[CHALLGS] = {
    "DRINK A CUP OF COFFEE MIXED WITH AN ENERGY DRINK AND A 5-HR ENERGY",
    "RUN 10 MILES",
    "24 HOUR SQUAT",
    "HEAR LOUD RAP MUSIC FOR 1 WEEK (nonstop)",
    "REQUEST MORE THAN 4 ROOMATES IN YOUR DORM"
};

class ScavTrap : public ClapTrap {
    
    public:
    
        ScavTrap ( void );
        ScavTrap ( std::string name );
        ~ScavTrap ( void );
        ScavTrap(ScavTrap const& rhs);
        ScavTrap& operator=( ScavTrap const& rhs );

        void    challengeNewComer( std::string const& target );

};

#endif