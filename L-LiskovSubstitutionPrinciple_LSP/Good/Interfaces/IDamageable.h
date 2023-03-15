#pragma once

class IDamageable {
public:
	virtual void TakeDamage(float damage) = 0;
	virtual void SetHealth(float newHealth) = 0;
	virtual float GetHealth() = 0;
protected:
	float health;
};