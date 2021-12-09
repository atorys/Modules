//
// Created by Achiote Tory on 12/10/21.
//

#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void Karen::_debug(void)
{
	std::cout << "I love to get extra bacon" << std::endl <<
	"for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void Karen::_info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money." <<
	"You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::_warning() {
	std::cout << "I think I deserve to have some extra bacon for free. " <<
	"I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::_error() {
	std::cout << "I love to get extra bacon" << std::endl <<
	"for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::complain(const std::string level) {
}

