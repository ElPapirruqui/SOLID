#pragma once
#include "Enemy.h"

class Player;

class Crate : public Enemy {
public:
	Crate();
	~Crate();
	void TakeDamage(float damage);
	void Move(SVector3 newPosition);
	void AttackPlayer(Player* player);
	int DropGold();
};