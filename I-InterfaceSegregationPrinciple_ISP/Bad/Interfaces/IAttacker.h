#pragma once

class IDamageable;

class IAttacker {
protected:
	virtual void AttackTarget(IDamageable* target) = 0;
	virtual void SpecialAttackOnTarget(IDamageable* target) = 0;
	virtual bool CheckIfCanSpecialAttack() = 0;
};