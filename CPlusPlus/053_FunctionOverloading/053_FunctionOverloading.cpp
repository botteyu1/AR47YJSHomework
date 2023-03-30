// 053_FunctionOverloading.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Function() 
{
    printf_s("void Function()\n");
}

// Functionint
void Function(int _Value)
{
    printf_s("void Function(int _Value)\n");
}

void Function(short _Value)
{
    printf_s("void Function(short _Value)\n");
}

void Function(int _Value, int _Test)
{
    printf_s("void Function(int _Value, int _Test)\n");
}

// 저는 이런 오버로딩을 좋아하지 않지만 
void Function(short _Value, int _Test)
{
    printf_s("void Function(short _Value, int _Test)\n");
}

// 함수라고 불리는 녀석들에게는 모두 적용된다.

class Player
{
public:

    void Function()
    {
        printf_s("void Function()\n");
    }

    // Functionint
    void Function(int _Value)
    {
        printf_s("void Function(int _Value)\n");
    }

    void Function(short _Value)
    {
        printf_s("void Function(short _Value)\n");
    }


    void Function(int _Value, int _Test)
    {
        printf_s("void Function(int _Value, int _Test)\n");
    }

    // 저는 이런 오버로딩을 좋아하지 않지만 
    void Function(short _Value, int _Test)
    {
        printf_s("void Function(short _Value, int _Test)\n");
    }

public:
    Player() 
    {
    }

    Player(int Value0)
    {
    }

    Player(int Value0, int Value1)
    {
    }

    //Player(int Value0, int Value1)
    //{
    //}
};

int main()
{
    int A = 'a';
    short B = 'a';

    Function('a');

    Function();
    Function((short)10, 10);

    Player NewPlayer0 = Player(10, 20);
    Player NewPlayer1 = Player();
    Player NewPlayer2 = Player(10);

    NewPlayer0.Function(10, 20);
    NewPlayer0.Function(10);
    NewPlayer0.Function();
}
