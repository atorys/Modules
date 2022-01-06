//
// Created by atory on 06.01.2022.
//

#ifndef DATA_HPP
#define DATA_HPP

#include "iostream"
#include <stdint.h>

struct Data {
	std::string		info;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
