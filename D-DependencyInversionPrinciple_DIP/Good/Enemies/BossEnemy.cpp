#include "BossEnemy.h"

BossEnemy::BossEnemy() {}
BossEnemy::~BossEnemy() {}

void BossEnemy::SpecialAttackOnTarget(IDamageable* target) {
	target->TakeDamage(20);
}