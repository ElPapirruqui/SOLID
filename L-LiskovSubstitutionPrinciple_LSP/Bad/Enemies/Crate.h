#pragma once
#include "Enemy.h"

class Player;

/*
* Crate inherits from Enemy to have health and dropeable loot
*/
class Crate : public Enemy {
public:
	Crate();
	~Crate();
	void TakeDamage(float damage);
	void Move(SVector3 newPosition);
	void AttackPlayer(Player* player);
	int DropGold();
};