//
// Created by atory on 10.11.2021.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>

#define EXIT "EXIT"
#define SEARCH "SEARCH"
#define ADD "ADD"
#define COLOR "\033[34m"
#define DEF_COLOR "\033[0m"
#define TABS "\t\t\t"
#define COMMANDS "> ADD\n> SEARCH\n> EXIT\n"
#define NAME_HEADER TABS "PHONEBOOK\n=================================\n"

class Contact {
public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string secret;
};

class Book {
    Contact contacts[8];
    int     contactsCount;
public:
    Book();
    void add();
    void search();
    void printContact(Contact contact);
};

#endif
