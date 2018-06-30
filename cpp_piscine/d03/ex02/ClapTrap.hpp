#ifndef CLAPTRAP_CLASS_H
#define CLAPTRAP_CLASS_H

#include <iostream>

class   ClapTrap {

    public:

        //costructors / descontructors
        ClapTrap ( void );
        ~ClapTrap ( void );

        ClapTrap(ClapTrap const& rhs);
        ClapTrap& operator=( ClapTrap const& rhs );

        //getters
        std::string getName( void );
        unsigned    getHp( void );
        unsigned    getMaxHp( void );
        unsigned    getEp( void );
        unsigned    getLevel( void );
        unsigned    getMeleeDamage( void );
        unsigned    getRangeDamage( void );
        unsigned    getArmorDamage( void );

        //setters
        void        setName( std::string name );
        void        setHp( unsigned );
        void        setMaxHp( unsigned );
        void        setEp( unsigned );
        void        setLevel( unsigned );
        void        setMeleeDamage( unsigned );
        void        setRangeDamage( unsigned );
        void        setArmorDamage( unsigned );

        //member functions
        void        rangedAttack( std::string const& target );
        void        meleeAttack( std::string const& target );
        void        takeDamage( unsigned int amount );
        void        beRepaired( unsigned int amount );
        
    protected:

        std::string _name;
        unsigned    _hp;
        unsigned    _maxhp;
        unsigned    _ep;
        unsigned    _level;
        unsigned    _meleedamage;
        unsigned    _rangeddamage;
        unsigned    _armordamage;

};

#endif