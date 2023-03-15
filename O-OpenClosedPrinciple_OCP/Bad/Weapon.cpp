#include "Weapon.h"

Weapon::Weapon() {}

Weapon::~Weapon() {}

float Weapon::GetDamage() {
	return damage;
}

/*
* Here we have a function that calculates the damage depending on the weapon type.
* This type of function makes for us impossible to add a new Weapon without modifiying the function itself
*/
float Weapon::GetTotalDamage() {	
	switch (type)
	{
	case EWeaponType::Blade:
		damage = damage * 1.1;
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