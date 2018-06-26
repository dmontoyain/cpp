#include <iostream>
#include "Contact.class.hpp"
#include "ContactsList.class.hpp"

/*
void    newList(ContactsList *contactslist)
{
    Contact newlist[contactslist->cnt];
    for(int i = 0; i < (contactslist->cnt - 1); i++){
        newlist[i] = contactslist->list[i];
    }
    contactslist->list = &newlist[0];
}*/

ContactsList::ContactsList(void) {
    this->cnt = 0;
    return ;
}

ContactsList::~ContactsList(void){
    return ;
}

void ContactsList::AddContact(Contact newContact){
    this->cnt++;    
    list[this->cnt - 1] = newContact;
}