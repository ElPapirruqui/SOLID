#include "Enemy.h"

Enemy::Enemy() {}

Enemy::~Enemy() {}

void Enemy::SetHealth(float newHealth) {
	health = newHealth;
}

float Enemy::GetHealth() {
	return health;
}