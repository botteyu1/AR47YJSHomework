#include "Bullet.h"
#include "ConsoleGameScreen.h"
#include <conio.h>
#include <Windows.h>

Bullet::Bullet()
{

}

void Bullet::Update() 
{
	--Pos.Y;
}