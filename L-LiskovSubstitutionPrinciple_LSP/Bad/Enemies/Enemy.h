#pragma once

struct SVector3 {
	float x = 0;
	float y = 0;
	float z = 0;
};

class Player;

class Enemy {
public:
	Enemy();
	virtual ~Enemy();
	void SetHealth(float newHealth);
	float GetHealth();
	virtual void TakeDamage(float damage);
	virtual void Move(SVector3 newPosition);
	virtual void AttackPlayer(Player* player);
	virtual int DropGold();
protected:
	float health;
	SVector3 position;
	int gold;
};