#pragma once
#include "../Interfaces/IDamageable.h"
#include "../Interfaces/IActivable.h"

class Door : IDamageable, IActivable {
public:
	Door();
	virtual ~Door();
	void TakeDamage(float damage) override;
	void SetHealth(float newHealth) override;
	float GetHealth() override;
	bool Activate();
private:
	bool OpenDoor();
};