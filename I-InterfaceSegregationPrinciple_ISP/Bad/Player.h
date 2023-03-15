#pragma once
#include "Interfaces/IDamageable.h"
#include "Interfaces/IAttacker.h"

class Weapon;
class Enemy;

class Player : public IDamageable, IAttacker {
public:
	Player();
	virtual ~Player();
	void TakeDamage(float damage) override;
	void SetHealth(float newHealth) override;
	float GetHealth() override;
protected:
	void AttackTarget(IDamageable* target) override;
	void SpecialAttackOnTarget(IDamageable* target) override;
	bool CheckIfCanSpecialAttack() override;
private:
	Weapon* currentWeapon;
};