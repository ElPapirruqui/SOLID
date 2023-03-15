#include "Weapons/Weapon.h"
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