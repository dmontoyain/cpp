#ifndef ZOMBIEEVENT_CLASS_H
# define ZOMBIEEVENT_CLASS_H

# include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"
#define ZOMBIENAMES 5

class   ZombieEvent {

    public:

        ZombieEvent(void);
        
        ~ZombieEvent(void);
        
        void    setZombieType(std::string type);
        
        Zombie  *newZombie(std::string name);

        Zombie  *randomChump();
    
    private:

        Zombie zombie;

        std::string names[ZOMBIENAMES];
};

#endif