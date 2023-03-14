#include "Weapon.h"
#include "Enemy.h"
#include "Player.h"

Player::Player() {}

Player::~Player() {}

void Player::ApplyDamageOnEnemy(Enemy* enemy) {
	float damage = currentWeapon->GetTotalDamage();
	enemy->ApplyDamage(damage);
}