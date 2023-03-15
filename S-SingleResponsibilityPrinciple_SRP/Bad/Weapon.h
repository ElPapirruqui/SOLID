#pragma once

enum class EWeaponType { Blade, Blunt };

class Weapon {
public:
	Weapon();
	virtual ~Weapon();
	float GetDamage();
	EWeaponType GetType();
private:
	float damage;
	EWeaponType type;
};