// 040_Class001.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 만들었어 => 이게 기본입니다.
// 학원의 객체지향을 배운다는 구성을 뭘까?
// => 나는 뭘 만들고 싶다.
// => 클래스로 만들어.
//    선생님에게 피드백을 받는다.

// c++에서 클래스는 모든것을 만들수 있는 문법입니다.
// int도 이 내가 만드는 개념과 다르지 않다는것을 곧 알게 됩니다.
class Player 
{
    // 2가지를 가지고 있습니다.
    
    // 속성과
    // 행동이라고 합니다.

    // 속성
    // 어떠어떠한 맷집이 쌔
    // 속력이 빨라 
    // 내부에서 변수를 선언하므로서 표현할 수 있다.

    // 이녀석은 이름이 있어.
    const char* const Name = "Player";
    // 물리력을 행사할수 있어.
    int Att; // 공격력
    // 이녀석은 맷집이 있어.
    int Hp; // 체력

    // 행동
    // 맞을수 있어야 한다.
    // 뛸수 있어야 한다.

    // 뛴다.
    void Run() {

    }

    // 맞는다.
    void Damage(const int _Damage) {

    }

    // 능력치를 보여준다.
    void StatusRender() 
    {
        printf_s("%s 의 스테이터스 ------------\n", Name);
        printf_s("공격력 : %d\n", Att);
        printf_s("체력 : %d\n", Hp);
        printf_s("---------------------------\n");
    }
};
// 이것도 사용자 정의 자료형중 하나입니다.

// 자료형
// 기본자료형 int bool 
// 사용자정의 자료형 Player, Monster FightZone => 모든것을 표현할수 있다.

int main()
{
    // int도 기본클래스입니다.

    // 개념을 생각하고 개념을 class로 정의 내리고
    // NewPlayer가 객체입니다.
    Player NewPlayer0 = Player();
    Player NewPlayer1 = Player();
    Player NewPlayer2 = Player();

    Player ArrPlayer[3];

    int Value = int();

    // 플레이어
    // 공격력
    // 체력

    std::cout << "Hello World!\n";
}


// 플레이어는 이러이러한 존재야.
//class Player
//{
//    const char* const Name = "Player";
//    int Att;
//    int Hp; 
//
//    void Run() {
//
//    }
//    void Damage(const int _Damage) {
//
//    }
//    void StatusRender()
//    {
//        printf_s("%s 의 스테이터스 ------------\n", Name);
//        printf_s("공격력 : %d\n", Att);
//        printf_s("체력 : %d\n", Hp);
//        printf_s("---------------------------\n");
//    }
//};