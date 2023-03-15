#include "Enemy.h"

Enemy::Enemy() {}

Enemy::~Enemy() {}

void Enemy::SetHealth(float newHealth) {
	health = newHealth;
}

float Enemy::GetHealth() {
	return health;
}

/*
* This is the new function to substract health on the enemy
*/
void Enemy::ApplyDamage(float damage) {
	health -= damage;
}