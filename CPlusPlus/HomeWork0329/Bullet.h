#pragma once
#include "ConsoleGameMath.h"

class ConsoleGameScreen;
class Bullet
{
public:
	Bullet();

	inline void SetPos(const int2& _Value)
	{
		Pos = _Value;
	}

	inline int2 GetPos() const
	{
		return Pos;
	}

	void Update();

protected:

private:
	int2 Pos = int2(0, 0);
};

