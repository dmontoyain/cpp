#ifndef HUMANA_CLASS_H
#define HUMANA_CLASS_H

#include "Weapon.hpp"

class HumanA {

    private:

        std::string name;

        Weapon&      weapon;

    public:
        
        HumanA(std::string name, Weapon& weapon);

        ~HumanA(void);

        void attack();

};

#endif