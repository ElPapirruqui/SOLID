#include "Lever.h"

Lever::Lever() {}

Lever::~Lever() {}

//IActivable implementation
bool Lever::Activate() {
	return TurnLever();
}

bool Lever::TurnLever() {
	return true;
}