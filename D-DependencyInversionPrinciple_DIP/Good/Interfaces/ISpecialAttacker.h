#pragma once

class IDamageable;

class ISpecialAttacker {
protected:
	virtual void SpecialAttackOnTarget(IDamageable* target) = 0;
};