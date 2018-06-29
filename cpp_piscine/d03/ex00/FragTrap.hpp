#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include <iostream>


class FragTrap {

    public:

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

        unsigned hitpoints;
        unsigned maxhitpoints;
        unsigned energypoints;
        unsigned level;
        unsigned meleedamage;
        unsigned rangeddamage;
        unsigned armordamage;
        std::string name;
};

#endif