//
// Created by Achiote Tory on 12/10/21.
//

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen {

	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);

public:
	Karen();
	~Karen();
	void complain(const std::string level);
};

#endif
