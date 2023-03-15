#include "Player.h"
#include "Crate.h"

Crate::Crate() {}

Crate::~Crate() {}

/*
*Now with the Enemy inheritance gone, we only implement the functions of the interfaces implemented
*/

void Crate::TakeDamage(float damage) {
	health -= damage * 1.2;
}

int Crate::DropGold() {
	return gold * 2;
}