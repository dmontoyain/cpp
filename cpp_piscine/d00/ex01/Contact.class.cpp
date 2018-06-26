#include <iostream>
#include "Contact.class.hpp"
#include "ContactsList.class.hpp"

Contact::Contact(void){
    return ;
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string lgn, std::string pA, std::string em, std::string phone, std::string bd) : firstName(fn), lastName(ln), nickname(nn), login(lgn), postalAddr(pA), email(em), phoneNbr(phone), birthday(bd) {
    return ;
}

Contact::~Contact(void){
    return ;
}