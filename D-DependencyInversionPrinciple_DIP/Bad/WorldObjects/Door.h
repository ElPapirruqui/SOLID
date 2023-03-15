#pragma once
#include "../Interfaces/IDamageable.h"
#include "../Interfaces/ILooteable.h"

class Door : IDamageable {
public:
	Door();
	virtual ~Door();
	void TakeDamage(float damage) override;
	void SetHealth(float newHealth) override;
	float GetHealth() override;
	bool OpenDoor();
};