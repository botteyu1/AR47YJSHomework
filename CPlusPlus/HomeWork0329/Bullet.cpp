#include "Bullet.h"
#include "ConsoleGameScreen.h"
#include "Player.h"


Bullet::Bullet()
	:Pos({-1,-1})
{
}

bool Bullet::movementBullets()
{
	//이동명령마다 한칸씩 위로 올라가다가 화면을 넘어가면 false를 반환함

	int2 NextPos = Pos;
	NextPos.Y -= 1;
	if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
	{
		Pos.Y-= 1;
	}
	else
	{
		return false;
	}
	
	return true;
}
