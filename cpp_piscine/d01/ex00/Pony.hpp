#ifndef PONY_H
# define PONY_H
#include <iostream>

class Pony {

    public:

        std::string name;
        std::string gender;
        int         age;

        Pony ( bool onStack );

        Pony ( std::string name, std::string gender, int age, bool onStack );

        ~Pony ( void );

    private:

        bool onStack;
};

#endif