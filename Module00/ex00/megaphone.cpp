//
// Created by atory on 10.11.2021.
//

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
    if (ac == 1) {
        std::cout << "* BEEP * " << std::endl;
        return (0);
    }
    for (int i = 1; i < ac; i++) {
        for (int j = 0; j < (int)std::strlen(av[i]); j++)
            if (std::islower(av[i][j]))
                av[i][j] = std::toupper(av[i][j]);
        std::cout << av[i];
    }
    std::cout << std::endl;
    return (0);
}