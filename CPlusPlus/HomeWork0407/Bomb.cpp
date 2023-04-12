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
	//�װ��ִ� ��Ȳ���� ����� ������ ��Ȳ�� ������ offó��
	if (0 == DeathCount)
	{
		Death();
	}
	else if (DeathCount != -1)
	{
		DeathCount--;
	}
	else if (0 >= --BoomCount)
	{
		DeathCount = 2;
		RenderChar = '%';
	}
}


void Bomb::Render() 
{
	ConsoleGameObject::Render();

	if (DeathCount != -1)
	{
		// �ð��� ���������� ������ ���� ����
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
