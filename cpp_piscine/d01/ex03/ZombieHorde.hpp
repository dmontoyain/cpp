#ifndef ZOMBIEHORDE_CLASS_H
#define ZOMBIEHORDE_CLASS_H

#include "Zombie.hpp"
#define MAXZOMBIES 20

static std::string names[MAXZOMBIES] = {
    "JOSH",
    "DAGO",
    "RAFA",
    "BRENDAN",
    "TOMATITO",
    "TOPO",
    "TOPOYIYOU",
    "YIYOU",
    "KYLE",
    "SELENA",
    "NICK",
    "THEO",
    "ISA",
    "SeXYBOY",
    "ANDY",
    "MARTHA",
    "JOE",
    "LOGAN",
    "IVAN",
    "ESTEBAN QUITO"
};

class ZombieHorde {

    private:
        
        void        createZombieHorde();

        const int   N;

    public:

        Zombie      *zombie;

        ZombieHorde(int);

        ~ZombieHorde(void);

        void    announce();
};

#endif