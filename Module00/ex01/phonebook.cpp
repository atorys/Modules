//
// Created by atory on 10.11.2021.
//

#include "phonebook.hpp"

Book::Book() {
    contactsCount = 0;
    lastAddedInd = 0;
}

void Book::add() {
    contactsCount++;
    if (contactsCount > 8)
        contactsCount = 8;
    if (lastAddedInd == 8)
        lastAddedInd = 0;

    std::string buf;
    std::string questions[5] = {">> First name: ",\
                                ">> Last name: ",  \
                                ">> Nickname: ",    \
                                ">> Phone number: ", \
                                ">> Secret: "};

    for (int n_q = 0; n_q < 5; n_q++)
    {
        std::cout << questions[n_q];
        getline(std::cin, buf, '\n');
        contacts[lastAddedInd].setField(n_q, buf);
    }
    lastAddedInd++;
}

void Book::search() {
    std::string line;
    int         index;

    std::cout << "    ind     first name  last name  nickname  " << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    for (int i = 0; i < contactsCount; i++) {
        std::cout << "|         " << i + 1 << "|";
        for (int n_f = 0; n_f < 3; n_f++)
            printContactField(contacts[i].getField(n_f));
        std::cout << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
    }

    std::cout << ">> Index: ";
    getline(std::cin, line, '\n');
    index = 0;
    for (int i = 0; i < (int)line.length(); i++)
        if (!std::isdigit(line[i]) && !index) {
            index = -1;
            std::cout << COLOR << "Index does not exist !" << DEF_COLOR << std::endl;
        }
    if (index != -1)
    {
        index = std::strtol(line.c_str(), NULL, 10);
        if (index < contactsCount && index >= 0 && index < 8) {
        	std::cout << "    ind     first name  last name  nickname    number     secret" << std::endl;
        	std::cout << "-------------------------------------------------------------------" << std::endl;
            std::cout << "|         " << index << "|";
            for (int n_f = 0; n_f < 5; n_f++)
                printContactField(contacts[index].getField(n_f));
            std::cout << std::endl;
            std::cout << "-------------------------------------------------------------------" << std::endl;
        }
        else
        	std::cout << COLOR << "Index does not exist !" << DEF_COLOR << std::endl;
    }
}

void Book::printContactField(std::string field) {
    int len = field.length();
    if (len > 9)
        std::cout << field.substr(0, 9) << '.' << "|";
    else
    {
        std::cout.fill(' ');
        std::cout << std::setw(10) << field << "|";
    }
}
