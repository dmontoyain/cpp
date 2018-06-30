#ifndef NINJATRAP_CLASS_H
#define NINJATRAP_CLASS_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class   NinjaTrap : public ClapTrap {

    public:

        NinjaTrap ( void );
        NinjaTrap ( std::string name );
        ~NinjaTrap ( void );

        NinjaTrap( NinjaTrap const& rhs );
        NinjaTrap& operator=( NinjaTrap const& rhs );

        void    ninjaShoebox(NinjaTrap &attack);
	    void    ninjaShoebox(ClapTrap &attack);
	    void    ninjaShoebox(FragTrap &attack);
	    void    ninjaShoebox(ScavTrap &attack);

};

#endif