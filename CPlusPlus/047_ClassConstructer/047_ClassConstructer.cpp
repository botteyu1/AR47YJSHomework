// 047_ClassConstructer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Weapon 
{
public:
	int Att = 200;

public:
	Weapon() 
	{
		int a = 0;
	}
};

class Potion
{
public:
	int Heal = 100;

public:
	Potion()
	{
		int a = 0;
	}
};


class Player
{
public:
	// 리터럴 초기화라고 부르는 초기화 방식을 이용할수 있다.
	// 11 이전에는 안됐던 방식이고 회사에서 사용하지 않을수도 있습니다.
	int Hp = 20;
	int Maxatt = 20;
	int MinAtt = 20;
	int PDef = 20;
	int MDef = 20;
	int Crit = 20;
	Weapon PlayerWeapon = Weapon();
	Potion PlayerPotion = Potion();

	void TestFunction()
	{

	}

public:
	// 무조건 클래스 이름과 완전히 동일해야 합니다.
	// 리턴값이 없다. => 리턴값이 그 클래스의 객체이기 때문
	// 객체없이 호출가능하다. => 일반적인 클래스의 함수는 무조건 객체가 필요한다.
	//                          객체를 만들어내야하는 함수가 객체를 필요로하면 모순
	// 맴버이니셜라이저라는 문법을 사용할수 있습니다.
	// 리터럴 초기화와 맴버이니셜라이저가 2순위 이기 때문에 맴버이니셜라이저의 값이 최종 적용된다.
	// 생성과 대입의 차이는 프로그래머들이 정말 꼼꼼하게 신경쓰는 차이이기 때문에
	///*Player*/ Player(int Value)
	//	//: Hp(30)
	//	//, Maxatt(30)
	//	//, MinAtt(30)
	//	//, PDef(30)
	//	//, MDef(30)
	//	//, Crit(30)
	//{
	//	// 이건 대입이라고 부릅니다.
	//	Hp = 30;
	//}

	Player(int _Value0, int _Value1)
	{

	}
};

void Test(const Player& _Player)
{

}

int main()
{
	// 생성자는 기본적으로 함수로 인식됩니다.

	// 클래스를 내가 만들었는데
	// 내가 정의하지 않는 행동을 할수 있다면 그건 컴파일러가 그렇게 한거다.
	// 그리고 그건 내눈에 생략된거다.
	// Player NewPlayer = Player(20, 30);

	// 이걸 리스트 이니셜라이저 문법이라고 합니다.
	Player NewPlayer = { 20, 30 };

	// Player NewPlayer = Player{ 20, 30 };

	// int Value = int(20);

	// 아래와 같이 사용할수가 없다.
	// Player::TestFunction();

	// 전역함수처럼 그냥 함수쓰듯이 사용할수는 없어요.
	// 클래스의 맴버함수는 무조건 객체를 필요로 합니다.
	// 하지만 이 제약에서 벗어난 함수가 2종이 존재하는데
	// 그중 1종이 생성자이다.
	// 생성자는 객체를 만들어내는 전역함수를 의미합니다.
	NewPlayer.TestFunction();

	// 닭이먼저냐 달걀이먼저냐 문제가 생긴다.


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
