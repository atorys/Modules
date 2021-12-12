//
// Created by Achiote Tory on 12/9/21.
//

#include <iostream>
#include <fstream>

static void	replacer(std::string filename, std::string s1, std::string s2)
{
    if (s1.empty() || s2.empty()) {
        std::cerr << "Error! String is empty!" << '\n';
        return ;
    }

    std::ifstream fd(filename.c_str(), std::ios::in);
    if (!fd) {
        std::cerr << "Error! File!" << '\n';
        return ;
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile) {
		std::cerr << "Error! OutFile!" << '\n';
        return ;
	}

    std::string line;
    int position;

    while (getline(fd, line, '\n')) {
        if (!fd.eof())
            line += '\n';

        while ((position = line.find(s1)) != -1) {
            line.erase(position, s1.size());
            line.insert(position, s2);
        }
        outfile << line;
    }
    outfile.close();
}

int main(int ac, char **av)
{
    if (ac != 4 || !av[1] || !av[2] || !av[3])
        std::cerr << "Error! Arguments!" << '\n';
    else
        replacer(std::string (av[1]),
                 std::string (av[2]),
                 std::string (av[3]));
    return (0);
}
