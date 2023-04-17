#include "Item.h"
#include <GameEngineBase/GameEngineRandom.h>
#include <GameEngineConsole/ConsoleGameScreen.h>
#include <GameEngineConsole/ConsoleObjectManager.h>
#include "GameEnum.h"
#include "Player.h"

Item::Item() 
{
	RenderChar = '&';

	int X = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().X - 1);
	int Y = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().Y - 1);
	SetPos({X, Y});
}

Item::~Item() 
{
}

void Item::Update() 
{
	std::list<ConsoleGameObject*>& playerGroup
		= ConsoleObjectManager::GetGroup(ObjectOrder::Player);
	for (ConsoleGameObject* Ptr : playerGroup)
	{
		// 터질때가 있습니다.
		if (nullptr == Ptr)
		{
			continue;
		}


		Player* PlayerPtr = (Player*)Ptr;
		int2 PlayerPos = PlayerPtr->GetPos();
		if (Pos == PlayerPos)
		{
			PlayerPtr->BombPowerPlus();
			Death();
		}
	}

	
}