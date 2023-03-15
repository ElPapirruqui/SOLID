#include "Player.h"
#include "Crate.h"

Crate::Crate() {}

Crate::~Crate() {}

void Crate::TakeDamage(float damage) {
	health -= damage * 1.2;
}

int Crate::DropGold() {
	return gold * 2;
}