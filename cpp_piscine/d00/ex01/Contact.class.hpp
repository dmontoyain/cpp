#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <iostream>

class Contact {

public:
    
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string login;
    std::string postalAddr;
    std::string email;
    std::string phoneNbr;
    std::string birthday;

    Contact ( void );

    Contact (std::string fn, std::string ln, std::string nn, std::string lgn, std::string pA, std::string em, std::string phone, std::string bd);

    ~Contact ( void );
    
};
#endif