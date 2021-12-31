//
// Created by atory on 30.12.2021.
//

#include <iostream>

void	convertChar(std::string literal);
void	convertInt(std::string literal);
void	convertFloat(std::string literal);
void	convertDouble(std::string literal);

int main(int ac, char **av)
{
	if (ac <= 1 || ac > 2) {
		std::cout << "illegal arguments !\n";
		return -1;
	}
	std::string headers[4] = {"char",
							  "int",
							  "float",
							  "double" };

	void	(*typeConverters[])(std::string literal) = {convertChar,
														convertInt,
														convertFloat,
														convertDouble };

	for (int idx = 0; idx < 4; idx++)
	{
		try {
			std::cout << headers[idx] << " : ";
			(*typeConverters[idx])(av[1]);
		}
		catch (char const* e)
		{
			std::cout << e;
		}
	}
	return 0;
}