#include "Monster.h"
#include "ConsoleGameScreen.h"

Monster::Monster() 
{
	RenderChar = 'M';
}

// 생략하셔야 합니다. 선언과 구현을 분리했다면
void Monster::Render() /*override*/
{
	if (true == IsUpdate())
	{
		ConsoleGameObject::Render();
	} 
	else if(0 < DeathTime)
	{
		if (DeathTime % 2)
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Pos, '@');
		}
		else 
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Pos, '+');
		}
		
		--DeathTime;
	}
}

void Monster::Update() 
{
	if (false == IsUpdate())
	{
		return;
	}

	if (true == DownCheck)
	{
		DownCheck = false;
		return;
	}

	// Pos.X += Dir;
}