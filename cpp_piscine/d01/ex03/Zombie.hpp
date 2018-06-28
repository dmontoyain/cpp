#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H
# include <iostream>

class Zombie {

    private:

        std::string name;
        std::string type;

    public:

        Zombie(void);

        Zombie(std::string name);

        ~Zombie(void);

        void            set_ZombieName(std::string name);

        void            set_ZombieType(std::string type);

        std::string     get_ZombieName(void);

        std::string     get_ZombieType(void);

        void            announce();

        Zombie          *newZombie(std::string name);
};

#endif
