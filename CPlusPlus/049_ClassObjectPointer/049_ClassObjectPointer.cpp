// 049_ClassObjectPointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{
public:
    void Damage(/*Player* const this*/) 
    {
        // 
        // this

        this->Hp = 20;
        printf_s("맞았습니다");
    }

public:
    int Hp = 100;
    int Att = 10;
};

//void Player::Damage(Player* const this)
//{
//    // 
//    // this
//
//    this->Hp = 20;
//    printf_s("맞았습니다");
//}



int main()
{
    int Value = int();
    Player NewPlayer = Player();

    int* ValuePtr = nullptr;
    Player* NewPlayerPtr = &NewPlayer;

    // NewPlayerPtr = nullptr;
    NewPlayerPtr->Damage(/*NewPlayerPtr*/);

    // bPlayer::Damage(/*NewPlayerPtr*/);

    // ValuePtr = nullptr;
    // nullptr 익셉션이 납니다.
    // *ValuePtr = 20;

    // NewPlayerPtr = nullptr;
    // NewPlayerPtr->Hp = 20;

}
