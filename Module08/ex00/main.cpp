//
// Created by atory on 07.01.2022.
//

#include "easyfind.hpp"
#include "list"
#include "vector"

int main()
{
	std::cout << "---------------------------------------- TEST1 \n";
	{
		std::list<int> list;

		for (int i = 0; i < 10; i++)
			list.push_back(i++ + 2);

		std::cout << "List : ";
		printContainer(list);
		try {
			std::cout << "easyfind '2' in list : " << *easyfind(list, 2) << "\n";
			std::cout << "easyfind '10' in list : " << *easyfind(list, 10) << "\n";
			std::cout << "easyfind '99' in list : " << *easyfind(list, 99) << "\n";
		}
		catch (std::exception &e) {
			std::cout << e.what();
		}
	}

	std::cout << "---------------------------------------- TEST2 \n";
	{
		std::vector<int> vector;
		for (int i = 10; i > 0; i--)
			vector.push_back(i);
		std::cout << "Vector : ";
		printContainer(vector);
		try {
			std::cout << "easyfind '2' in vector : " << *easyfind(vector, 2) << "\n";
			std::cout << "easyfind '10' in vector : " << *easyfind(vector, 10) << "\n";
			std::cout << "easyfind '99999' in vector : " << *easyfind(vector, 99999) << "\n";
		}
		catch (std::exception &e) {
			std::cout << e.what();
		}
	}
	return 0;
}
