#pragma once

class Enemy;

class Enemy {
public:
	Enemy();
	virtual ~Enemy();
	void SetHealth(float newHealth);
	float GetHealth();
private:
	float health;
};