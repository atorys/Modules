//
// Created by atory on 26.12.2021.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"

class Brain {
protected:
	std::string _idea[100];
public:
	Brain();
	Brain(const std::string ideas);
	Brain(const Brain& refBrain);
	~Brain();

	Brain&	operator=(const Brain& refBrain);
};

#endif
