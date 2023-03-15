#pragma once
#include "Interfaces/IDamageable.h"
#include "Interfaces/ILooteable.h"

class Crate : public IDamageable, ILooteable {
public:
	Crate();
	virtual ~Crate();
	void TakeDamage(float damage);
	int DropGold();
};