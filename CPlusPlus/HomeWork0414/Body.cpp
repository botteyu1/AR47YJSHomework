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

	//���� ���� �̰� �װ� ��� ���� ��ġ���� Ȯ���� �ƴϸ� ����
	while(true)
	{
		int X = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().X - 1);
		int Y = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().Y - 1);
		SetPos({ X, Y });
		bool b = true;
		//��� ���
		if(_HeadPos == Pos)
		{
			b = false;
			continue;
		}
		// �ٵ� ���
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

		//�ѹ��� ��꿡 �ɸ��� �ʾ����� ����
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








