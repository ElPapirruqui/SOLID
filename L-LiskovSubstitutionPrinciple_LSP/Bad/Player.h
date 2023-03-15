#pragma once

class Weapon;
class Enemy;

class Player {
public:
	Player();
	virtual ~Player();
	virtual void TakeDamage(float damage);
private:
	Weapon* currentWeapon;
	void ApplyDamageOnEnemy(Enemy* enemy);
	float health;
};