//
// Created by atory on 10.11.2021.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

#define COLOR "\033[34m"
#define DEF_COLOR "\033[0m"
#define TABS "\t\t\t"
#define COMMANDS "> ADD\n> SEARCH\n> EXIT\n"
#define NAME_HEADER TABS "PHONEBOOK\n=================================\n"

class Contact {
    std::string info[5];
public:
    void setField(int index, std::string value){
        info[index] = value;
    }
    std::string getField(int index) {
        return info[index];
    }
};

class Book {
    Contact contacts[8];
    int     lastAddedInd;
    int     contactsCount;
public:
    Book();
    void add();
    void search();
    void printContactField(std::string field);
};

#endif
