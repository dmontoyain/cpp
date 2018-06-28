#ifndef BRAIN_CLASS_H
#define BRAIN_CLASS_H

#include <iostream>
#include <sstream>

class Brain {
    public:

        Brain(void);

        ~Brain(void);

        std::string identify(void);

    private:

        std::string address;
};

#endif