#pragma once
#include "../Interfaces/IMovable.h"
#include "../Interfaces/IDamageable.h"
#include "../Interfaces/IAttacker.h"
#include "../Interfaces/ILooteable.h"

class Enemy : protected IDamageable, IMovable, IAttacker, ILooteable{
public:
	Enemy();
	virtual ~Enemy();
	void TakeDamage(float damage) override;
	void SetHealth(float newHealth) override;
	float GetHealth() override;
	int DropGold() override;
protected:
	void Move(SVector3 newPosition) override;
	void AttackTarget(IDamageable* target) override;	
};