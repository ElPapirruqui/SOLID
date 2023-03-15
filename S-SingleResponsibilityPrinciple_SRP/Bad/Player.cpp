#include "Weapon.h"
#include "Enemy.h"
#include "Player.h"

Player::Player() {}

Player::~Player() {}

/*
* Here we can see that the ApplyDamageOnEnemy function has more than one responsability:
* Calculate the damage based on the weapon type the Player is currently helding
* Substract health from the Enemy reference
*/
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