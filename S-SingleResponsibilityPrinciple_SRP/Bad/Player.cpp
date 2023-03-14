#include "Weapon.h"
#include "Enemy.h"
#include "Player.h"

Player::Player() {}

Player::~Player() {}

void Player::ApplyDamageOnEnemy(Enemy* enemy) {
	float damage = currentWeapon->GetDamage();
	EWeaponType type = currentWeapon->GetType();
	switch (type)
	{
		case EWeaponType::Blade:
			damage = damage * 1.2;
		break;
		case EWeaponType::Blunt:
			damage = damage * 0.9;
		break;
	}
	float enemyHealth = enemy->GetHealth();
	enemy->SetHealth(enemyHealth - damage);
}