#include "Weapon.h"

Weapon::Weapon() {}

Weapon::~Weapon() {}

float Weapon::GetDamage() {
	return damage;
}

float Weapon::GetTotalDamage() {	
	switch (type)
	{
	case EWeaponType::Blade:
		damage = damage * 1.2;
		break;
	case EWeaponType::Blunt:
		damage = damage * 0.9;
		break;
	}
	return damage;
}

EWeaponType Weapon::GetType() {
	return type;
}