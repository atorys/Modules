//
// Created by atory on 06.01.2022.
//

#include "Base.hpp"
#include <cstdlib>

Base*	generate(void) {
	std::srand(time(0));
	switch (std::rand() % 3) {
		case 0: {
			std::cout << "A-base was generated.\n";
			return (new A());
		}
		case 1: {
			std::cout << "B-base was generated.\n";
			return (new B());
		}
		default: {
			std::cout << "C-base was generated.\n";
			return (new C());
		}
	}
}


void	identify(Base* p) {
	std::cout << "[ Identifying base by POINTER ] : \n";
	if (dynamic_cast<A*>(p))
		std::cout << "A!\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B!\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C!\n";
	else
		std::cout << "Undefined pointer or NULL.\n";
}

void	identify(Base& p){
	std::cout << "[ Identifying base by REFERENCE ] : \n";
	try {
		A tryOne = dynamic_cast<A&>(p);
		std::cout << "A!\n";
		return ;
	}
	catch (std::exception &e) {
		std::cout << "not A\n";
	}
	try {
		B tryTwo = dynamic_cast<B&>(p);
		std::cout << "B!\n";
		return ;
	}
	catch (std::exception &e) {
		std::cout << "definitely not B\n";
	}
	try {
		C tryThree = dynamic_cast<C&>(p);
		std::cout << "C!\n";
		return ;
	}
	catch (std::exception &e) {
		std::cout << "even not C?\n";
	}
}

int main(void) {
	Base* surprise = generate();
	identify(surprise);

	Base&	ref = *surprise;
	identify(ref);

	delete surprise;
	return 0;
}
