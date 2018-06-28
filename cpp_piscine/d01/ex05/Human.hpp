#ifndef HUMAN_CLASS_H
#define HUMAN_CLASS_H

#include <iostream>
#include "Brain.hpp"

class Human {

    private:

        Brain   brain;

    public:

        Human(void);

        ~Human(void);

        Brain getBrain();

        std::string identify(void);
};

#endif