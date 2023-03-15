#include "Blade.h"

Blade::Blade() {}

Blade::~Blade() {}

float Blade::GetTotalDamage() {
	return damage * 1.1;
}