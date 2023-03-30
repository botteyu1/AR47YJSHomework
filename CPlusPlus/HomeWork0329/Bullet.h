#pragma once

#include "ConsoleGameMath.h"
#include "Player.h"

class ConsoleGameScreen;


class Bullet
{
private:
	
	int2 Pos;
	;

public:
	Bullet();
	inline int2 GetPos() const
	{
		return Pos;
	}
	inline void SetPos(const int2& _Value)
	{
		Pos = _Value;
	}

	bool movementBullets();

};

