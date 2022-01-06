//
// Created by atory on 06.01.2022.
//

#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}
