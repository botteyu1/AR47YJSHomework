#include "Bullet.h"
#include "ConsoleGameScreen.h"
#include "Player.h"


Bullet::Bullet()
	:Pos({-1,-1})
{
}

bool Bullet::movementBullets()
{
	//�̵���ɸ��� ��ĭ�� ���� �ö󰡴ٰ� ȭ���� �Ѿ�� false�� ��ȯ��

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
