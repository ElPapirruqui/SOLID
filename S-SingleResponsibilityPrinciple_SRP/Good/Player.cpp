#include "Weapon.h"
#include "Enemy.h"
#include "Player.h"

Player::Player() {}

Player::~Player() {}

/*
* Here we removed the damage calculation, and the Enemy health substraction
* Damage calculation now lies in Weapon class
* Enemy now has an ApplyDamage to control the behaviour
*/
void Player::ApplyDamageOnEnemy(Enemy* enemy) {
	enemy->ApplyDamage(currentWeapon->GetTotalDamage());
}