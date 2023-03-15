#pragma once
#include "Interfaces/IDamageable.h"
#include "Interfaces/ILooteable.h"

/*
* Inheritance from Enemy is gone, and we are free to implement the needed interfaces
*/
class Crate : public IDamageable, ILooteable {
public:
	Crate();
	virtual ~Crate();
	void TakeDamage(float damage);
	int DropGold();
};