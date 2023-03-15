#pragma once

struct SVector3 {
	float x = 0;
	float y = 0;
	float z = 0;
};

class IMovable {
protected:
	virtual void Move(SVector3 newPosition) = 0;
	SVector3 position;
};