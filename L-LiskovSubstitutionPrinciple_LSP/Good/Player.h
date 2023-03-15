#pragma once
#include "Interfaces/IDamageable.h"
#include "Interfaces/IAttacker.h"

class Weapon;
class Enemy;

class Player : public IDamageable, IAttacker {
public:
	Player();
	virtual ~Player();
	void TakeDamage(float damage);
	void SetHealth(float newHealth);
	float GetHealth();
protected:
	void AttackTarget(IDamageable* target);
private:
	Weapon* currentWeapon;
};