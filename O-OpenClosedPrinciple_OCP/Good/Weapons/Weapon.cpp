#include "Weapon.h"

Weapon::Weapon() {}

Weapon::~Weapon() {}

float Weapon::GetDamage() {
	return damage;
}

/*
* Here now this function is the base behaviour and the variations are on the implementations Blade and Blunt
*/
float Weapon::GetTotalDamage() {
	return damage;
}

EWeaponType Weapon::GetType() {
	return type;
}