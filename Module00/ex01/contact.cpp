//
// Created by Achiote Tory on 11/14/21.
//

#include "phonebook.hpp"

void Contact::setField(int index, std::string value){
	info[index] = value;
}

std::string Contact::getField(int index) {
	return info[index];
}
