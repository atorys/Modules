//
// Created by Achiote Tory on 12/9/21.
//

#include <iostream>
#include <fstream>

static void	replacer(std::string filename, std::string s1, std::string s2)
{

}

int main(int ac, char **av)
{

	if (ac != 4 || !av[1] || !av[2] || !av[3])
	{
		std::cerr << "Error! Arguments!" << std::endl;
		return (1);
	}
//	std::string filename(av[1]);
//	std::string s1(av[2]);
//	std::string s2(av[3]);
//
//	std::ifstream fd(filename, std::ios::in);
//	if (!fd) {
//		std::cerr << "Error! File!" << std::endl;
//		return (1);
//	}
//	while (fd)
//	{
//		std::string line;
//		getline(fd, line);
//		std::cout << line << std::endl;
//	}
	replacer(av[0], av[2], av[3]);
	return (0);
}
