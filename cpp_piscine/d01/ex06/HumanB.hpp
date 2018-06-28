#ifndef HUMANB_CLASS_H
#define HUMANB_CLASS_H

#include "Weapon.hpp"

class HumanB {

    private:

        std::string name;

        Weapon      *weapon;

    public:

        HumanB(std::string name);

        ~HumanB(void);

        void attack();

        void setWeapon(Weapon weapon);

};

#endif