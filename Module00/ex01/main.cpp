//
// Created by atory on 10.11.2021.
//

#include "phonebook.hpp"

int main(void)
{
    std::string line;

    std::cout << COLOR << NAME_HEADER << COMMANDS << DEF_COLOR;
    std::cout << "> ";
    while (getline(std::cin, line, '\n')) {
        if (!line.compare(SEARCH))
            ;
        else if (!line.compare(ADD))
            ;
        else if (!line.compare(EXIT))
            break ;
        else
            std::cout << COLOR << "available commands:\n" << COMMANDS << DEF_COLOR;
        std::cout << "> ";
    }
    return (0);
}