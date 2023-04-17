#include <list>

#include "Body.h"
#include <GameEngineBase/GameEngineRandom.h>
#include <GameEngineConsole/ConsoleGameScreen.h>


Body::Body() 
{
	RenderChar = '*';
	int X = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().X - 1);
	int Y = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().Y - 1);
	SetPos({ X, Y });
}


Body::~Body() 
{
}

void Body::SetRandPos(int2 _HeadPos, std::vector<int2>& _AllSnakes, int _CurBodyCnt, int _FirstBody)
{
	int TotallBodyCnt = _FirstBody - _CurBodyCnt;
	int SnakeSize = (int)_AllSnakes.size();

	//랜덤 숫자 뽑고 그게 뱀과 같은 위치인지 확인후 아니면 리턴
	while(true)
	{
		int X = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().X - 1);
		int Y = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().Y - 1);
		SetPos({ X, Y });
		bool b = true;
		//헤드 계산
		if(_HeadPos == Pos)
		{
			b = false;
			continue;
		}
		// 바디 계산
		for (int i = _FirstBody; i > TotallBodyCnt; i--)
		{
			if (i < 0)
			{
				if (_AllSnakes[SnakeSize + i] == Pos)
				{
					b = false;
					break;
				}
			}
			else
			{

				if (_AllSnakes[i] == Pos )
				{
					b = false;
					break;
				}
			}
		}

		//한번도 계산에 걸리지 않았으면 리턴
		if (b == true)
		{
			return;
		}
	}
	
}

void Body::Update()
{
	

}

void Body::BeCaught()
{

}








