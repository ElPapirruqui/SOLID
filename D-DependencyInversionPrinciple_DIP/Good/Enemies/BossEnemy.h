#pragma once
#include "../Interfaces/ISpecialAttacker.h"
#include "Enemy.h"

class BossEnemy : Enemy, ISpecialAttacker {
public:
	BossEnemy();
	~BossEnemy();
protected:
	void SpecialAttackOnTarget(IDamageable* target) override;
};