#include "Player.h"
#include "Enemy.h"

Enemy::Enemy() {}

Enemy::~Enemy() {}

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

// Here we only have a definition for the boss type, leaving no behaviour for the rest of the enemy types
void Enemy::SpecialAttackOnTarget(IDamageable* target) {
	if (type == EEnemyType::Boss) {
		target->TakeDamage(20);
	}
}

int Enemy::DropGold() {
	return gold;
}