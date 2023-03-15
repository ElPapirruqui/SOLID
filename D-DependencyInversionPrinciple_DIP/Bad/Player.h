#pragma once
#include "Interfaces/IDamageable.h"
#include "Interfaces/IAttacker.h"

class Weapon;
class Enemy;
class Lever;
class Door;

class Player : public IDamageable, IAttacker {
public:
	Player();
	virtual ~Player();
	void TakeDamage(float damage) override;
	void SetHealth(float newHealth) override;
	float GetHealth() override;
protected:
	void AttackTarget(IDamageable* target) override;
private:
	Weapon* currentWeapon;
	bool Activate(Lever* lever);
	bool Activate(Door* door);
};