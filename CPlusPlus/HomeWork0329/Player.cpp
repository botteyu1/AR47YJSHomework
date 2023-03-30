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

// ȭ��ٱ����� �������� �ϼ���. 
void Player::Input()
{
	if (Fire) {
		Bullet_Move();
	}
	if (0 == _kbhit())
	{
		// 0.5�ʰ� �����.
		Sleep(InterFrame);
		// �Ϻη� ���߰� ����̴ϴ�.
		// continue; �ݺ��� ���ο����� ��밡��

		// �Ѿ� �̵�
		
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

		// �Ѿ��� �߻���°� �ƴϸ� �߻���
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
	// ȭ�鳡���� ���ư��� ����� false
	if (!pBullet->movementBullets())
	{
		pBullet->SetPos({-1,-1});
		Fire = false;
	}
		
	return;
}
