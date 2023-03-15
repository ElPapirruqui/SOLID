#pragma once

class Lever {
public:
	Lever();
	virtual ~Lever();
	bool Activate();
private:
	bool TurnLever();
};