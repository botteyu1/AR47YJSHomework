// 063_VPtr.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// virtual이 붙어있는 클래스가 존재한다면
// 이 클래스의 객체가 생성될때.
// void(*__vfptr[???])() <= 가상함수 테이블이라고 합니다.
// 
// 함수포인터의 배열을 만들어내고 그걸 함수포인터의 포인터로 저장합니다.
// void(**__vfptr)()

class FightUnit 
{
public:
    virtual void Damage() 
    {

    }

    virtual void FightStatusRender()
    {

    }

public:
    FightUnit() 
        // [0]FightUnit::Damage
        // [1]FightUnit::FightStatusRender
    {
        this;
        int a = 0;
    }
};

class Player : public FightUnit
{
public:
    void Damage() override
    {

    }

    //void FightStatusRender() override
    //{

    //}

public:
    Player() 
        // [0]Player::Damage
        // [1]FightUnit::FightStatusRender
    {
        this;
        int a = 0;
    }
};

class Fighter : public Player
{
    // public:
    // Fighter() {
        // [0]Player::Damage
        // [1]FightUnit::FightStatusRender
    // 

};

int main()
{
    int Value = sizeof(Player);

    Player NewPlayer;

    // std::cout << "Hello World!\n";
}
