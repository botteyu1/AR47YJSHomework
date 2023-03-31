#pragma once
#include "ConsoleGameObject.h"

class Monster : public ConsoleGameObject
{
public:
	Monster();
	void Update();
	void Turn();
	void Move();
	void CollisionEnter();

private:
	int Dir = -1;
};

