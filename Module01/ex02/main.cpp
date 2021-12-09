//
// Created by Achiote Tory on 12/9/21.
//

#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "this is string :		" << str << std::endl;
	std::cout << "this is address to string :	" << &str << std::endl << std::endl;

	std::cout << "this is pointer to string :		" << strPTR << std::endl;
	std::cout << "this is also string from pointer :	" << *strPTR << std::endl << std::endl;

	std::cout << "this is reference to string :			" << strREF << std::endl;
	std::cout << "reference has the same address as string :	" << &strREF << std::endl;
	return (0);
}
