#include "Crate.h"

Crate::Crate() {}

Crate::~Crate() {}

void Crate::TakeDamage(float damage) {
	health -= damage * 1.2;
}

void Crate::SetHealth(float newHealth) {
	health = newHealth;
}

float Crate::GetHealth() {
	return health;
}

int Crate::DropGold() {
	return gold * 2;
}