//
// Created by atory on 10.11.2021.
//

#include "phonebook.hpp"

Book::Book() {
    contactsCount = 0;
}

void Book::add() {
    if (contactsCount == 8)
        contactsCount = 0;
    std::cout << ">> First name: ";
    getline(std::cin, contacts[contactsCount].first_name, '\n');
    std::cout << ">> Last name: ";
    getline(std::cin, contacts[contactsCount].last_name, '\n');
    std::cout << ">> Nickname: ";
    getline(std::cin, contacts[contactsCount].nickname, '\n');
    std::cout << ">> Phone number: ";
    getline(std::cin, contacts[contactsCount].phone_number, '\n');
    std::cout << ">> Secret: ";
    getline(std::cin, contacts[contactsCount].secret, '\n');
    contactsCount++;
}

void Book::search() {
    std::string line;
    int         index;

    std::cout << "==========================================";
    for (int i = 0; i < contactsCount; i++) {
        printContact(contacts[i]);
    }
    std::cout << ">> Index: ";
    getline(std::cin, line, '\n');
}

void Book::printContact(Contact contact) {
    std::cout <<
    std::cout << contact.first_name;
    std::cout << contact.last_name;
    std::cout << contact.nickname << "\n";
}