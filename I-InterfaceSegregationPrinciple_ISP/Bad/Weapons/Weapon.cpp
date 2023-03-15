#include "Weapon.h"

Weapon::Weapon() {}

Weapon::~Weapon() {}

float Weapon::GetDamage() {
	return damage;
}

EWeaponType Weapon::GetType() {
	return type;
}