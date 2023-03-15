#include "Blunt.h"

Blunt::Blunt() {}

Blunt::~Blunt() {}

float Blunt::GetTotalDamage() {
	return damage * 0.9;
}