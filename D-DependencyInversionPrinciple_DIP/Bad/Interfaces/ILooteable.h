#pragma once

class ILooteable {
public:
	virtual int DropGold() = 0;
protected:
	int gold;
};