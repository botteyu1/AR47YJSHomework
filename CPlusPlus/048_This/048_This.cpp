// 048_This.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player 
{
public:
    Player() 
    {
    }

    void Damage(/*Player* const this*/ int _Att) 
    {
        // __int64 Address = (__int64) & Hp;
        // 눈에 보이지 않지만 맴버함수에는 
        // 첫번째 인자로 무조건 적으로 자기자신의 클래스의 포인터가 들어가게 됩니다.

        // * const이기 때문에 this가 가리키는 대상은 바꿀수 없다.
        // this = nullptr;
        this->Hp -= _Att;
    }

    inline int GetHp() 
    {
        return Hp;
    }

    inline void SetHp(int _Value)
    {
        Hp = _Value;
    }

    inline int GetAtt()
    {
        return Att;
    }

    inline void SetAtt(int _Value)    
    {        
        Att = _Value;    
    }


protected:

public:
    int Hp = 100;
    int Att = 10;

};

// 300번지가 들어간다.
void GlobalDamage(Player* _this, int _Att) 
{
    // 클래스를 포인터로 사용할때는
    // 내부에 있는 맴버변수에 접근하는 방식이
    // .이 아니고 ->로 변경된다.

    // 300번지에 있는 hp
    _this->Hp -= _Att;
}


// 200번지에 새로운 플레이어를 만든다.
//void GlobalDamageValue(Player _NewPlayer, int _Att)
//{
//    // 클래스를 포인터로 사용할때는
//    // 내부에 있는 맴버변수에 접근하는 방식이
//    // .이 아니고 ->로 변경된다.
//    _NewPlayer.Hp -= _Att;
//}


// 500번지에 있는 4바이트 30 
void Test(int _Value)
{
    _Value = 30128;
}

int main()
{
    // 700 번지에 있는 4바이트 30이죠?
    int Value = 30;
    Test(Value);

    // 300
    Player NewPlayer0 = Player();
    // NewPlayer0.Hp -= 20;

    // 350
    Player NewPlayer1 = Player();

    // GlobalDamageValue(NewPlayer0, 20);
    // GlobalDamage(&NewPlayer0, 20);
    // 각객체들이 함수를 호출해서 자신의 맴버변수들을 알아서 잘찾아서 바꿀수 있을까?
    // 80
    NewPlayer0.Damage(/*&NewPlayer0,*/ 20);

    // GlobalDamage(&NewPlayer1, 50);
    // 50
    NewPlayer1.Damage(/*&NewPlayer1,*/ 50);

    //NewPlayer.SetAtt(100);
    //NewPlayer.SetHp(100);

    
}
