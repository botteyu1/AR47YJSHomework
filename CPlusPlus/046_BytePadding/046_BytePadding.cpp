// 046_BytePadding.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// short 2바이트 정수형;

class Player 
{
public:
    int Hp;          // 4
    short Value3;    // 4

    // 8바이트 이하 가장큰 바이트의 자료형을 찾아요.
    // 4바이트
    // 먼저 4바이트를 할당했다고 쳐보자
    // 딱맞거나 들어갈수 있으면 그대로 픽스
    // 4바이트 할당한다.
    // char
    // 8바이트
};

class ServerLinkZoneAndProxyManager 
{
public:
    int LinkCount;
};

int main()
{
    ServerLinkZoneAndProxyManager NewTest;
    NewTest.ServerLinkZoneAndProxyManager::LinkCount;

    // 500번지의 플레이어를 대표하는 NewPlayer
    Player NewPlayer;

    // NewPlayer.Player::Hp;

    // 99%의 경우 FullName을 사용하지 않고
    NewPlayer./*Player::*/Hp;
    // NewPlayer.Player::Hp;

    // 일반적으로 맴버변수일경우에는 아무런 의미도 없어요.
    // Player::Hp;


    // 일반적인 맴버변수를 :: 통해서 사용할수 없다.
    // Player::Hp;
    // NewPlayer.Hp;

    int* Ptr = &NewPlayer.Hp;

    int Size = sizeof(Player);

    printf_s("%d", Size);

}
