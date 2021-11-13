//
// Created by atory on 10.11.2021.
//

#include "phonebook.hpp"

int main(void)
{
    std::string line;
    Book        newBook;

    std::cout << COLOR << NAME_HEADER << COMMANDS << DEF_COLOR;
    std::cout << "> ";
    while (getline(std::cin, line, '\n')) {
        if (!line.compare("SEARCH"))
            newBook.search();
        else if (!line.compare("ADD"))
            newBook.add();
        else if (!line.compare("EXIT")) {
            std::cout << COLOR << "deleting phonebook data.... exit" << std::endl;
            return (0);
        }
        else
            std::cout << COLOR << "available commands:\n" << COMMANDS << DEF_COLOR;
        std::cout << "> ";
    }
    return (0);
}