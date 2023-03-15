#pragma once
#include "Weapon.h"

class Blunt : public Weapon {
public:
	Blunt();
	~Blunt();
	float GetTotalDamage();
};