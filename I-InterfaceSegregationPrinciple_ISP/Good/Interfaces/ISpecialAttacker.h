#pragma once

//New Interface to implement the special attack

class IDamageable;

class ISpecialAttacker {
protected:
	virtual void SpecialAttackOnTarget(IDamageable* target) = 0;
};