#include "Lever.h"

Lever::Lever() {}

Lever::~Lever() {}

bool Lever::Activate() {
	return TurnLever();
}

bool Lever::TurnLever() {
	return true;
}