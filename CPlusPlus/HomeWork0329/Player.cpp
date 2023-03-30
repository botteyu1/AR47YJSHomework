#include "Player.h"
#include "ConsoleGameScreen.h"
#include <conio.h>
#include <Windows.h>

Player::Player(Bullet* _Bullet)
	:pBullet(_Bullet)
{

}
int2 Player::GetBulletPos() const
{
	if (pBullet == nullptr)
	{ 
		return int2(-1, -1);
	}
	return pBullet->GetPos();
}

// 화면바깥으로 못나가게 하세요. 
void Player::Input()
{
	if (Fire) {
		Bullet_Move();
	}
	if (0 == _kbhit())
	{
		// 0.5초간 멈춘다.
		Sleep(InterFrame);
		// 일부러 멈추게 만들겁니다.
		// continue; 반복문 내부에서만 사용가능

		// 총알 이동
		
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
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
		{
			Pos.X -= 1;
		}
		break;
	case 'd':
	case 'D':
		NextPos = Pos;
		NextPos.X += 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
		{
			Pos.X += 1;
		}
		break;
	case 'w':
	case 'W':
		NextPos = Pos;
		NextPos.Y -= 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
		{
			Pos.Y -= 1;
		}
		break;
	case 's':
	case 'S':
		NextPos = Pos;
		NextPos.Y += 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
		{
			Pos.Y += 1;
		}
		break;
	case 'g':
	case 'G':

		// 총알이 발사상태가 아니면 발사함
		if (!Fire)
		{
			Fire = true;
			pBullet->SetPos(Pos);
		}
		break;
	default:
		break;
	}

	Sleep(InterFrame);
}

void Player::Bullet_Move()
{
	if (pBullet == nullptr)
	{
		return;
	}
	// 화면끝까지 날아가다 벗어나면 false
	if (!pBullet->movementBullets())
	{
		pBullet->SetPos({-1,-1});
		Fire = false;
	}
		
	return;
}
