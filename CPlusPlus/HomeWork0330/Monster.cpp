#include "Monster.h"
#include "ConsoleGameScreen.h"

Monster::Monster() 
{
	RenderChar = 'M';
}

void Monster::Update() 
{
	if (false == IsUpdate())
	{
		return;
	}

	// 업데이트마다 지정된 방향으로 한칸씩 이동
	Move();
}

void Monster::Turn()
{
	Dir = -Dir;
	//벗어난 화면 돌아가기
	Move();
}



void Monster::Move()
{
	int2 NewPos = GetPos();
	SetPos({ NewPos.X + Dir,NewPos.Y });
}

void Monster::CollisionEnter()
{
	Turn();
	//한칸 내림
	int2 NewPos = GetPos();
	SetPos({ NewPos.X ,NewPos.Y +1});
}
