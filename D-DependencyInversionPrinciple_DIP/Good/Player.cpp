#include "Weapons/Weapon.h"
#include "WorldObjects/Door.h"
#include "WorldObjects/Lever.h"
#include "Interfaces/IActivable.h"
#include "Player.h"

Player::Player() {}

Player::~Player() {}

void Player::SetHealth(float newHealth) {
	health = newHealth;
}

float Player::GetHealth() {
	return health;
}

void Player::TakeDamage(float damage) {
	health -= damage;
}

void Player::AttackTarget(IDamageable* target){
	target->TakeDamage(currentWeapon->GetTotalDamage());
}

void Player::Move(SVector3 newPosition) {
	position = newPosition;
}

//Now the polymorphism is gone and the definition of Activate is defined in the class that implements the IActivable interface
bool Player::Activate(IActivable* activable) {
	return activable->Activate();
}