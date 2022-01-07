//
// Created by atory on 07.01.2022.
//

#include "Array.hpp"
#include "iostream"

int main() {
	/*
	 * test for integers && copy/assignation operator overloading
	 * && out of range case
	 * && empty Array creation
	 */
	std::cout << "------------------------------------------------ TEST1 \n";
	{
		Array<int> myArray(5);
		std::cout << "my array size = " << myArray.size() << "\n";
		try {
			myArray[0] = 10;
			myArray[1] = 11;
			myArray[2] = 12;
			std::cout << myArray[0] << "\n";
			std::cout << myArray[1] << "\n";
			std::cout << myArray[999] << "\n";
			std::cout << myArray[2] << "\n";
		}
		catch (std::exception &e) {
				std::cout << "Error : " << e.what();
		}

		Array<int> copyArray;
		std::cout << "copy array size = " << copyArray.size() << "\n";
		copyArray = myArray;
		std::cout << "copy array size = " << copyArray.size() << "\n";

		try {
			std::cout << copyArray[0] << "\n";
			std::cout << copyArray[1] << "\n";
			std::cout << copyArray[2] << "\n";

			copyArray[2] = 999;
			std::cout << copyArray[2] << "\n";
			std::cout << myArray[2] << "\n";
		}
		catch (std::exception &e) {
				std::cout << "Error : " << e.what();
		}
	}
	/*
	 * test for float/string
	 */
	std::cout << "------------------------------------------------ TEST2 \n";
	{
		Array<float> fArray(2);
		try {
			fArray[0] = 42.21f;
			fArray[1] = -42.21f;
			std::cout << fArray[0] << "\n";
			std::cout << fArray[1] << "\n";
		}
		catch (std::exception &e) {
			std::cout << "Error : " << e.what();
		}
		Array<std::string> strArray(1);
		try {
			strArray[0] = "blabla";
			std::cout << strArray[0] << "\n";
			std::cout << strArray[1] << "\n";
		}
		catch (std::exception &e) {
			std::cout << "Error : " << e.what();
		}
	}
	return 0;
}
