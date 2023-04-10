// 072_Enum.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 0 전사
// 1 마법사
// 2 궁수


// 컴파일 되면 이녀석은 int로 변형되게 됩니다.
//enum GameJobType
//{
//    Fighter, // = 0
//    Mage, // = 1
//    Archer, // = 2
//    Paladin, // = 3
//};

// 좀더 형을 따진다.
// 암시적 형변환이 다 막혔어요.
// 이녀석은 그냥 int가 될수 없어요.
enum class GameJobType
{
    Fighter = 5, // = 5
    Mage, // = 6
    Archer, // = 7
    Paladin, // = 3
};


class FightUnit 
{
    // 직업
    GameJobType JobType;

public:

    void SetJobType(GameJobType _Type)
    {
        JobType = _Type;
    }

};

int main()
{
    // 직업이라는게 있다고 쳤을때.
    FightUnit NewUnit;

    // 명시적인것을 더 좋아해서 그렇다.
    NewUnit.SetJobType(GameJobType::Archer);

    int Value = (int)GameJobType::Archer;


    std::cout << "Hello World!\n";
}
