#include <iostream>
#include <iomanip> //https://en.cppreference.com/w/cpp/header/iomanip
#include "Contact.class.hpp"
#include "ContactsList.class.hpp"

void    add_contact(ContactsList *cl)
{
    Contact newcontact = Contact();

    std::cout << "Type your first name:\n";
    std::cin.ignore(1);
    getline(std::cin, newcontact.firstName);
    std::cout << "Type your last name:\n";
    getline(std::cin, newcontact.lastName);
    std::cout << "Type your nickname:\n";
    getline(std::cin, newcontact.nickname);
    std::cout << "Type your login:\n";
    getline(std::cin, newcontact.login);
    std::cout << "Type your postal address:\n";
    getline(std::cin, newcontact.postalAddr);
    std::cout << "Type your email:\n";
    getline(std::cin, newcontact.email);
    std::cout << "Type your phone:\n";
    getline(std::cin, newcontact.phoneNbr);
    std::cout << "Type your birthday:\n";
    getline(std::cin, newcontact.birthday);

    //adds contacts to contactslist array
    cl->AddContact(newcontact);
}

void    border()
{
    std::cout << " | ";
}

void    headers()
{
    std::cout << std::left << std::setw(10) << "index";
    border();
    std::cout << std::left << std::setw(10) << "first name";
    border();
    std::cout << std::left << std::setw(10) << "last name";
    border();
    std::cout << std::left << std::setw(10) << "nickname" << std::endl;
}

void convert_string(std::string *str)
{
    int diff = (*str).size() - 9;
    (*str).replace((*str).size() - diff, diff, ".");
}

void displaySelectedContact(ContactsList *cl)
{
    int     userInput;

    std::cin.clear();
    std::cout << "Enter index of contact you would like to see?" << std::endl;
    std::cin >> userInput;

    if (std::cin.fail() || userInput >= cl->cnt){
        std::cout << "Error: Incorrect input type" << std::endl;
        return ;
    }
    std::cout << "First Name: ";
    std::cout << cl->list[userInput].firstName << std::endl;
    std::cout << "Last Name: ";
    std::cout << cl->list[userInput].lastName << std::endl;
    std::cout << "NickName: ";
    std::cout << cl->list[userInput].nickname << std::endl;
    std::cout << "Login: ";
    std::cout << cl->list[userInput].login << std::endl;
    std::cout << "Postal Address: ";
    std::cout << cl->list[userInput].postalAddr << std::endl;
    std::cout << "Email: ";
    std::cout << cl->list[userInput].email << std::endl;
    std::cout << "Phone #: ";
    std::cout << cl->list[userInput].phoneNbr << std::endl;
    std::cout << "Birth Date: ";
    std::cout << cl->list[userInput].birthday << std::endl;
}

void search_phonebook(ContactsList *cl)
{
    std::string tmp;

    headers();
    std::cout << std::setw(10);
    for(int i = 0; i < cl->cnt; i++){
        std::cout << std::setw(10) << std::to_string(i);
        border();
        tmp = cl->list[i].firstName;
        if (cl->list[i].firstName.size() > 10){
            convert_string(&tmp);
        }
        std::cout << std::setw(10) << tmp;
        border();
        tmp = cl->list[i].lastName;
        if (cl->list[i].lastName.size() > 10){
            convert_string(&tmp);
        }
        std::cout << std::setw(10) << tmp;
        border();
        tmp = cl->list[i].nickname;
        if (cl->list[i].nickname.size() > 10){
            convert_string(&tmp);
        }
        std::cout << tmp << std::endl;
    }

    displaySelectedContact(cl);
}

int main()
{
    std::string cmd;
    ContactsList contactsList;

    while (1)
    {   
        std::cout << "What should I do: (ADD, EXIT, SEARCH)?" << std::endl;
        std::cin >> cmd;

        if (cmd == "EXIT")
        {
            std::cout << "Goodbye" << std::endl;
            break ;
        }
        if (cmd == "ADD"){
            add_contact(&contactsList);
            std::cout << "Contact added to your phonebook :)" << std::endl;
        }
        if (cmd == "SEARCH"){
            search_phonebook(&contactsList);
        }
    }
    return 0;
}