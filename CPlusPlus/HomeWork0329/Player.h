#pragma once
#include "ConsoleGameMath.h"
#include "Bullet.h"
class ConsoleGameScreen;


class Bullet;

class Player
{
private:
	static const int InterFrame = 200;

	bool Fire = false;

	int2 Pos = int2(0, 0);

	Bullet* pBullet ;

	

public:
	Player(Bullet* _Bullet);

	inline void SetPos(const int2& _Value)
	{
		Pos = _Value;
	}

	inline int2 GetPos() const
	{
		return Pos;
	}
	int2 GetBulletPos() const;
	

	void Input();

	// �̻����� ����� ���� �̰� ��õ�Ѵ�.
	// 
	inline bool IsFire() 
	{
		return Fire;
	}
private:
	void Bullet_Move();
	
protected:



	// �̷� ������ Has a��� �Ѵ�. Player Has a Bullet
	// Bullet NewBullet; // �÷��̾��� ��ü ���ο� �Ѿ� �ѹ��� �ִ�.
	// Bullet* NewBullet; // �ٱ��� �ִ� �Ѿ��� �����Ҽ� �ִ�.
};

