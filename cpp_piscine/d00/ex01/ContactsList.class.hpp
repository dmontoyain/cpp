#ifndef CONTACTSLIST_CLASS_H
# define CONTACTSLIST_CLASS_H
# define MAX_CONTACTS 8
#include <iostream>
#include "Contact.class.hpp"

class ContactsList {

public:

    uint8_t cnt;
    Contact list[MAX_CONTACTS];

    ContactsList (void);
    ~ContactsList (void);

    void AddContact(Contact newContact);
};

#endif
