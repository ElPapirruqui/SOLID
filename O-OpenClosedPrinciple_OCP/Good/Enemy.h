#pragma once

class Enemy;

class Enemy {
public:
	Enemy();
	virtual ~Enemy();
	void SetHealth(float newHealth);
	float GetHealth();
	void ApplyDamage(float damage);
private:
	float health;
};