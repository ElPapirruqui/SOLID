#pragma once
#include "../Interfaces/IDamageable.h"
#include "../Interfaces/ILooteable.h"

class Crate : IDamageable, ILooteable {
public:
	Crate();
	virtual ~Crate();
	void TakeDamage(float damage) override;
	void SetHealth(float newHealth) override;
	float GetHealth() override;
	int DropGold() override;
};