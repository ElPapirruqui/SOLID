#include "Weapons/Weapon.h"
#include "Enemies/Enemy.h" 
#include "Player.h"

Player::Player() {}

Player::~Player() {}

void Player::ApplyDamageOnEnemy(Enemy* enemy) {
	enemy->TakeDamage(currentWeapon->GetTotalDamage());
}

void Enemy::TakeDamage(float damage) {
	health -= damage;
}