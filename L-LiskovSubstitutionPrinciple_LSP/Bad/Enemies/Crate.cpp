#include "../Player.h"
#include "Crate.h"

Crate::Crate() {}

Crate::~Crate() {}

void Crate::TakeDamage(float damage) {
	health -= damage * 1.2;
}

void Crate::Move(SVector3 newPosition) {
	//Crate cant move
}

void Crate::AttackPlayer(Player* player) {
	//Crate cant attack
}

int Crate::DropGold() {
	return gold * 2;
}