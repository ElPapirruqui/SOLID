#include "Weapons/Weapon.h"
#include "Enemy.h"
#include "Player.h"

Player::Player() {}

Player::~Player() {}

void Player::ApplyDamageOnEnemy(Enemy* enemy) {
	enemy->ApplyDamage(currentWeapon->GetTotalDamage());
}