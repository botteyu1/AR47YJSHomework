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

	// ������Ʈ���� ������ �������� ��ĭ�� �̵�
	Move();
}

void Monster::Turn()
{
	Dir = -Dir;
	//��� ȭ�� ���ư���
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
	//��ĭ ����
	int2 NewPos = GetPos();
	SetPos({ NewPos.X ,NewPos.Y +1});
}
