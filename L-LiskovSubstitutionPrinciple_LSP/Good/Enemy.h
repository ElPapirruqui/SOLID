#pragma once
#include "Interfaces/IMovable.h"
#include "Interfaces/IDamageable.h"
#include "Interfaces/IAttacker.h"
#include "Interfaces/ILooteable.h"

class Enemy : public IMovable, IDamageable, IAttacker, ILooteable{
public:
	Enemy();
	virtual ~Enemy();
	void TakeDamage(float damage);
	void SetHealth(float newHealth);
	float GetHealth();
	int DropGold();
protected:
	void Move(SVector3 newPosition);
	void AttackTarget(IDamageable* target);
};