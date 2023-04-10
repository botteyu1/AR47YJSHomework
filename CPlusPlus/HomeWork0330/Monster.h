#pragma once
#include "ConsoleGameObject.h"

// \|/-

class Monster : public ConsoleGameObject
{
public:
	Monster();
	void Update();

	int2 GetNextPos() 
	{
		return { Pos.X + Dir, Pos.Y };
	}

	void Down()
	{
		Pos.Y += 1;
		Dir *= -1;
		DownCheck = true;
	}

	void Render() override;

private:
	int DeathTime = 4;

	bool DownCheck = false;
	int Dir = 1;
};

