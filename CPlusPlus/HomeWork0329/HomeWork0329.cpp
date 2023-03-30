// HomeWork0329.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Player.h"
#include "Bullet.h"
#include "ConsoleGameScreen.h"

int main()
{
	// 1. 상대의 말과 전제를 잘듯고 그 문제에 대한 단계도 정리
	//    ex) 1. 요구1 2. 요구2
	// 2. 문제를 쪼개서 봐라 문제를 어떻게 해결한건지 단계를 세우고 들어가라.
	//    ex) 1. 무슨일을 한다 2. 무슨일을 한다.
	// 3. 분명히 자신의 문제를 도와주기 위한 코드가 있다.
	//    ex) Player
	// 4. 추가기능 넣지 마세요.

	// 오늘의 숙제입니다.
	// 총알 딱 1발을 만들고 그 1발을
	// 총알 1발을 발사하세요.
	// 방향 상관 없음.
	// 총알 클래스를 만든다.
	// 플레이어가 여러분들이 지정한 키를 누르르면 


	// 1. 클래스를 만들거다.
	// 2. 그 클래스 필요한 맴버변수를 정의한다 <= Pos
	// 3. 그 클래스에 필요한 맴버함수를 정의한다 <= Pos

	// Bullet NewBullet;

	// 1. 단계 총알을 만든다.
	// 2. 총알을 보이게 한다.
	// 3. 총알을 원할때 상황에 맞춰서(if) 보이고 안보이게 한다. <= 변수 선언
	//    ex) if는 메모리 영역.
	//    책임이 누구에게 있지? 
	// 
	// 4. 총알은 플레이어를 상황에 맞춰서(if) 따라다니게 한다.

	Player NewPlayer = Player();
	Bullet NewBullet = Bullet();

	int2 ScreenSize = ConsoleGameScreen::GetMainScreen().GetScreenSize();
	NewPlayer.SetPos(ScreenSize.Half());

	while (true)
	{
		system("cls");

		ConsoleGameScreen::GetMainScreen().ScreenClear();

		ConsoleGameScreen::GetMainScreen().SetScreenCharacter(NewPlayer.GetPos(), '*');
		if (true == NewPlayer.IsFire())
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(NewBullet.GetPos(), '^');
			NewBullet.Update();

			//int2 CurPos = NewBullet.GetPos();
			//--CurPos.Y;
			//NewBullet.SetPos(CurPos);
		}

		ConsoleGameScreen::GetMainScreen().ScreenPrint();

		NewPlayer.Input();
		if (false == NewPlayer.IsFire())
		{
			NewBullet.SetPos(NewPlayer.GetPos());
		}

	}

    std::cout << "Hello World!\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
