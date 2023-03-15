#pragma once

enum class EWeaponType { Blade, Blunt };

class Weapon {
public:
	Weapon();
	virtual ~Weapon();
	float GetDamage();
	virtual float GetTotalDamage() = 0;
	EWeaponType GetType();
protected:
	float damage;
	EWeaponType type;
};