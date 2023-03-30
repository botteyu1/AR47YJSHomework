// 056_HeaderAndCpp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// c++정식 해더 확장자는 hpp
// 아무도 쓰지를 않는다.
// c하던 사람들이 다 c++로 넘어왔고
// 초반에 c++위원회는 c와의 호환성을 강조했다.

//#include "Player.hpp"

#include "Player.h"
#include "Player.h"
#include "Player.h"

#include "Monster.h"
// int Value = 10;

// #pragma once
// 한 cpp파일내의 헤더 중복 제거.
//#include "Player.h"
//#include "Player.h"
//#include "Player.h"
//#include "Player.h"
//#include "Player.h"
//#include "Player.h"
//#include "Player.h"
//#include "Player.h"
//#include "Player.h"

int main()
{
    // 컴파일러는 2가지 처리를 합니다.
    // 먼저 CPP들을 다 검사합니다.
    // 하나의 프로젝트의 내가 친 모든 코드는
    // 단 1개의 파일로 응축되게 됩니다.

    Player NewPlayer = Player();

    NewPlayer.Damage(10);

    Monster NewMonster = Monster();

    // 나는 했는데 안된다. <= 입에서 손쉽게 나오면 안된다.
    // 어 그럼 내가 해볼까 <= 이미 졌어.

    // 내가 사용하지 않는건 컴파일러가 맘대로 지워버릴때가 있기 때문에
    // 쓰면 에러가 날거다.
    // Monster::MonsterCount = 10;

}


