#include "Player.h"
#include <conio.h>
#include <Windows.h>
#include <GameEngineConsole/ConsoleGameScreen.h>
#include "ConsoleObjectManager.h"
#include "Bomb.h"
#include "GameEnum.h"
#include "ConsoleObjectManager.h"

bool Player::IsGameUpdate = true;

Player::Player()
{
	RenderChar = '*';
	SetPos(ConsoleGameScreen::GetMainScreen().GetScreenSize().Half());

}
bool Player::IsBomb(int2 _NextPos)
{
	// 폭탄이 설치되었다면 못통과하게 만들어놓으세요.
	GameEngineArray<ConsoleGameObject*>& BombGroup
		= ConsoleObjectManager::GetGroup(ObjectOrder::Bomb);


	for (int i = 0; i < BombGroup.Count(); i++)
	{
		if (BombGroup[i] == nullptr)
		{
			continue;
		}
		if (_NextPos == BombGroup[i]->GetPos())
		{
			return true;
		}
	}
	return false;

}

// 화면바깥으로 못나가게 하세요. 
void Player::Update()
{
	if (0 == _kbhit())
	{
		return;
	}

	char Ch = _getch();
	
	int2 NextPos = { 0, 0 };
	
	switch (Ch)
	{
	case 'a':
	case 'A':
		NextPos = Pos;
		NextPos.X -= 1;
		
		if ((false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos)) and !IsBomb(NextPos))
		{
			
			Pos.X -= 1;
		}
		break;
	case 'd':
	case 'D':
		NextPos = Pos;
		NextPos.X += 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos) and !IsBomb(NextPos))
		{
			Pos.X += 1;
		}
		break;
	case 'w':
	case 'W':
		NextPos = Pos;
		NextPos.Y -= 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos) and !IsBomb(NextPos))
		{
			Pos.Y -= 1;
		}
		break;
	case 's':
	case 'S':
		NextPos = Pos;
		NextPos.Y += 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos) and !IsBomb(NextPos))
		{
			Pos.Y += 1;
		}
		break;
	case 'f':
	case 'F':
	{
		Bomb* NewBomb = ConsoleObjectManager::CreateConsoleObject<Bomb>(ObjectOrder::Bomb);
		NewBomb->Init();
		NewBomb->SetPos(GetPos());


		// 폭탄설치 
		break;
	}
	case 'q':
	case 'Q':
	{
		IsGameUpdate = false;
		break;
	}
	default:
		break;
	}
}
