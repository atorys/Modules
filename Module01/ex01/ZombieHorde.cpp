//
// Created by Achiote Tory on 12/9/21.
//

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie	*horde;

	horde = new Zombie[N];
	for (int zombie = 0; zombie < N; zombie++)
		horde[zombie].initZombie(name + std::to_string(zombie + 1));
	return (horde);
}
