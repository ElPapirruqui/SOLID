#pragma once

class IDamageable;

class IAttacker {
protected:
	virtual void AttackTarget(IDamageable* target) = 0;
};