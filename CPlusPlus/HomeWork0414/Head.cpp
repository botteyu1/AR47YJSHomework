#include "Head.h"
#include <conio.h>
#include <GameEngineConsole/ConsoleGameScreen.h>
#include <GameEngineConsole/ConsoleObjectManager.h>
#include "Body.h"
#include "Parts.h"

bool Head::IsPlay = true;

Head::Head() 
{
	RenderChar = 'O';
	SetPos(ConsoleGameScreen::GetMainScreen().GetScreenSize().Half());
	int2 ScrSize = ConsoleGameScreen::GetMainScreen().GetScreenSize();
	int TotalSize = ScrSize.X * ScrSize.Y;
	AllSnakes.resize(TotalSize-1);
}

Head::~Head() 
{
	
}

void Head::IsBodyCheck()
{
	std::list<ConsoleGameObject*>& BodyGroup
		= ConsoleObjectManager::GetGroup(1);
	//마지막을 제외한 바디는 이미 장착된거 인것이라 마지막만 확인
	std::list<ConsoleGameObject*>::iterator End = BodyGroup.end();
	Body* Ptr = (Body*)BodyGroup.back();
	
	if (nullptr == Ptr)
	{
		return;
	}

	int2 BodyPos = Ptr->GetPos();
	if (Pos == BodyPos)
	{
		//바디를 새로 만든다.
		CurBodyCnt++;
		Ptr->Death();
		Body* NewBody = ConsoleObjectManager::CreateConsoleObject<Body>(1);
		NewBody->SetRandPos(Pos, AllSnakes,CurBodyCnt,FirstBody);
	}
}

void Head::NewBodyCreateCheck()
{
	
}


void Head::Render()
{
	if (false == IsUpdate())
	{
		return;
	}

	ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Pos, RenderChar);

	//몸통 그리기
	int TotallBodyCnt = FirstBody - CurBodyCnt;
	int SnakeSize = (int)AllSnakes.size();
	for (int i = FirstBody; i > TotallBodyCnt; i--)
	{
		if (i < 0)
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(AllSnakes[SnakeSize + i], 'o');
		}
		else
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(AllSnakes[i], 'o');
		}
	}
}

// 화면바깥으로 못나가게 하세요. 
void Head::Update()
{
	if (true == ConsoleGameScreen::GetMainScreen().IsScreenOver(GetPos()))
	{
		IsPlay = false;
	}
	

	if (0 == _kbhit())
	{
		//SetPos(GetPos() + Dir);
		IsBodyCheck();
		return;
	}

	char Ch = _getch();
	//이동전 전 좌표 저장
	SetBodyPos();

	int2 NextPos = { 0, 0 };

	switch (Ch)
	{
	case 'a':
	case 'A':
		Dir = int2::Left;
		break;
	case 'd':
	case 'D':
		Dir = int2::Right;
		break;
	case 'w':
	case 'W':
		Dir = int2::Up;
		break;
	case 's':
	case 'S':
		Dir = int2::Down;
		break;
	case 'q':
	case 'Q':
		IsPlay = false;
		return;
	default:
		return;
	}

	SetPos(GetPos() + Dir);
	IsBodyCheck();

	if (true == ConsoleGameScreen::GetMainScreen().IsScreenOver(GetPos()) or 
		CurBodyCnt == AllSnakes.size() or
		IsCollisionCheck())
	{
		IsPlay = false;
	}
}
void Head::SetBodyPos()
{
	FirstBody++;
	if (FirstBody >= AllSnakes.size())
	{
		FirstBody = 0;
	}
	AllSnakes[FirstBody] = Pos;
	
}

bool Head::IsCollisionCheck()
{
	int TotallBodyCnt = FirstBody - CurBodyCnt;
	int SnakeSize = (int)AllSnakes.size();
	for (int i = FirstBody; i > TotallBodyCnt; i--)
	{
		if (i < 0)
		{
			if(AllSnakes[SnakeSize + i] == Pos)
			{
				return true;
			}
		}
		else
		{
			
			if (AllSnakes[i] == Pos)
			{
				return true;
			}
		}
	}
	return false;
}

