#include "Bomb.h"
#include <GameEngineConsole/ConsoleGameScreen.h>

Bomb::Bomb() 
{
}

Bomb::~Bomb() 
{
}

void Bomb::Init()
{
	RenderChar = '@';
}

// explogen

void Bomb::Update() 
{
	ConsoleGameObject::Update();
	//죽고있는 상황으로 만들고 터지는 상황이 끝나면 off처리
	if (0 >= DeathCount)
	{
		Off();
	}
	else if (IsDeath())
	{
		DeathCount--;
	}
	else if (0 >= --BoomCount)
	{
		Death();
		RenderChar = '%';
	}
}


void Bomb::Render() 
{
	ConsoleGameObject::Render();

	if (IsDeath())
	{
		// 시간에 지남에따라 폭발이 점점 퍼짐
		switch (DeathCount)
		{
		case 0:
			Exploding(3);
		case 1:
			Exploding(2);
		case 2:
			Exploding(1);
			break;
		default:
			break;
		}
	}
}

void Bomb::Exploding(const int _iNum)
{
	int2 iPos = { Pos.X+ _iNum, Pos.Y };
	ConsoleGameScreen::GetMainScreen().SetScreenCharacter(iPos,'%');
	 iPos = { Pos.X- _iNum, Pos.Y };
	ConsoleGameScreen::GetMainScreen().SetScreenCharacter(iPos,'%');
	 iPos = { Pos.X, Pos.Y + _iNum };
	ConsoleGameScreen::GetMainScreen().SetScreenCharacter(iPos,'%');
	 iPos = { Pos.X, Pos.Y - _iNum };
	ConsoleGameScreen::GetMainScreen().SetScreenCharacter(iPos,'%');

}
