#pragma once
#include "Interfaces/IMovable.h"
#include "Interfaces/IDamageable.h"
#include "Interfaces/IAttacker.h"
#include "Interfaces/ILooteable.h"

enum class EEnemyType { Common, Boss };

class Enemy : public IMovable, IDamageable, IAttacker, ILooteable{
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
	void SpecialAttackOnTarget(IDamageable* target) override;
	bool CheckIfCanSpecialAttack() override;
	EEnemyType type;
};