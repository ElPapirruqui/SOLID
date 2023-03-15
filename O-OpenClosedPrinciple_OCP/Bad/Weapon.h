#pragma once

enum class EWeaponType { Blade, Blunt };

class Weapon {
public:
	Weapon();
	virtual ~Weapon();
	float GetDamage();
	float GetTotalDamage();
	EWeaponType GetType();
private:
	float damage;
	EWeaponType type;
};