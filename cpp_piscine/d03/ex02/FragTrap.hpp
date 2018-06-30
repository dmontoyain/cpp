#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

#define VAULTENERGYCOST 25
#define ATTACKS_SZ 5

static const std::string attacks[ATTACKS_SZ] = {
    "spit",
    "electric shock",
    "fireball",
    "freeze",
    "shave"
};

class FragTrap : public ClapTrap {

    public:

        FragTrap ( void );
        FragTrap ( std::string name );
        ~FragTrap ( void );

        FragTrap ( const FragTrap& );
        FragTrap& operator = ( const FragTrap& ft );

        void vaulthunter_dot_exe ( std::string const & target );

};

#endif