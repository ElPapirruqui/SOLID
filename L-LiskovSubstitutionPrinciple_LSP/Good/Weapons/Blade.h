#pragma once
#include "Weapon.h"

class Blade : public Weapon {
public:
	Blade();
	~Blade();
	float GetTotalDamage();
};