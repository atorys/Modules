//
// Created by atory on 10.11.2021.
//

#include "phonebook.hpp"

Book::Init() {
    contacts_count = 0;
}

void Book::add() {
    if (contacts_count == 8)
        contacts_count = 0;
    std::cout << ">> First name: ";
    getline(std::cin, contacts[contacts_count].first_name, '\n');
    contacts_count++;
}