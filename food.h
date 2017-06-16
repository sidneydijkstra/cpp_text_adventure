// food.h

#ifndef FOOD_H
#define FOOD_H

#include <iostream>
#include <string>

#include "item.h"
#include "player.h"

class Food : public Item {
public:
	Food(Player* player, std::string name, int weight, int healAmount);
	~Food();

	// food use function
	void use();
private:
	// heal amount
	int _heal = 0;

	// player
	Player* _player;
};

#endif /* FOOD_H */