//
// Created by atory on 06.01.2022.
//

#include "Data.hpp"

int main(void) {
	Data	data = {"здесь могла бы быть ваша реклама!\n"};

	std::cout << "data address : " << &data << "\n";

	/*
	 * преобразует шестнадцатеричный указатель в десятичное число
	 */
	uintptr_t 	serializedData = serialize(&data);
	std::cout << "serialized data : " << serializedData << "\n";
	/*
	 * преобразует число в шестнадцатеричный указатель на структуру Data
	 */
	Data *ptr = deserialize(serializedData);
	std::cout << "deserialized data : " << ptr << "\n";
	std::cout << ptr->info;

	return 0;
}