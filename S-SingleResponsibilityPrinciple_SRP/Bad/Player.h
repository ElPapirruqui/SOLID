#pragma once

class Weapon;
class Enemy;

class Player {
public:
	Player();
	virtual ~Player();
private:
	Weapon* currentWeapon;
	void ApplyDamageOnEnemy(Enemy* enemy);
};