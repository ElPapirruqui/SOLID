#include "Door.h"

Door::Door() {}

Door::~Door() {}

void Door::TakeDamage(float damage) {
	health -= damage;
}

void Door::SetHealth(float newHealth) {
	health = newHealth;
}

float Door::GetHealth() {
	return health;
}

bool Door::OpenDoor() {
	return true;
}