#include "Enemy.h"

Enemy::Enemy() {}

Enemy::~Enemy() {}

/*
* Definition for special attack is gone
*/

void Enemy::SetHealth(float newHealth) {
	health = newHealth;
}

float Enemy::GetHealth() {
	return health;
}

void Enemy::TakeDamage(float damage) {
	health -= damage;
}

void Enemy::Move(SVector3 newPosition) {
	position = newPosition;
}

void Enemy::AttackTarget(IDamageable* target){
	target->TakeDamage(10);
}

int Enemy::DropGold() {
	return gold;
}