#pragma once
#include "Interfaces/IDamageable.h"
#include "Interfaces/IAttacker.h"
#include "Interfaces/IMovable.h"

class Weapon;
class Enemy;
class IActivable;

class Player : public IDamageable, IAttacker, IMovable {
public:
	Player();
	virtual ~Player();
	void TakeDamage(float damage) override;
	void SetHealth(float newHealth) override;
	float GetHealth() override;
protected:
	void AttackTarget(IDamageable* target) override;
	void Move(SVector3 newPosition) override;
private:
	Weapon* currentWeapon;
	bool Activate(IActivable* activable);
};