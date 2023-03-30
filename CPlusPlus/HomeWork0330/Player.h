#pragma once
#include "ConsoleGameMath.h"

class ConsoleGameScreen;
class Player
{
private:
	static const int InterFrame = 200;

	int2 Pos = int2(0, 0);
	int BulletCount = 0;

	class Bullet* BulletPtr;
public:
	Player();

	inline void SetPos(const int2& _Value)
	{
		Pos = _Value;
	}

	inline int2 GetPos() const
	{
		return Pos;
	}

	void Input();

	void Render();

	// ���漱���� �̷��� �ص� �ȴ�.
	void SetBulletArr( Bullet* _BulletPtr)
	{
		BulletPtr = _BulletPtr;
	}

protected:




	// �̷� ������ Has a��� �Ѵ�. Player Has a Bullet
	// Bullet NewBullet; // �÷��̾��� ��ü ���ο� �Ѿ� �ѹ��� �ִ�.
	// Bullet* NewBullet; // �ٱ��� �ִ� �Ѿ��� �����Ҽ� �ִ�.
};

