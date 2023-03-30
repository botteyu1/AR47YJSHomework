// 041_Class002_UserAccess.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player 
{ // 클래스의 시작과
    // 클래스 문법에서는 속성이나 행동을
    // 내가 외부에 공겨할지 안할지를 결정할 수 있습니다.

// 접근제한 지정자라고 부릅니다.
// public 접근제한 지정자를 썼다.
// 접근제한 지정자는 만들어진 위치부터 아래까지 새로운 접근제한 지정자가
// 없으면 전부다 자신의 접근제한 지정자로 판단한다.

    //  내부와 외부만 구분할수 있으면
    //                 내부코드     자식코드     외부
public:                // 공개        공개      공개
    int Att = 10;
    int Def = 2;
protected:             // 공개        공개      비공개
    int Hp = 100;
private:               // 공개        비공개    비공개
    int Speed = 3;     
}; // 클래스의 끝
// 이안에 안들어있으면 다 외부입니다.

class Monster 
{
private: // 디폴트 접근제한 지정자는 private이다.
    int Att = 10;
    int Def = 2;
    int Hp = 100;
    int Speed = 3;

    // 클래스 내부
public:
    int GetHp() 
    {
        return Hp;
    }

    void SetHp(int _Hp) 
    {
        // 수정할수 있는 접점이 적을수록 좋다 하나 입니다.
        Hp = _Hp;

        if (0 == _Hp)
        {
            int a = 0;
        }
    }
};

int main()
{
    // 외부

    Monster NewMonster;
    NewMonster.SetHp(20);

    NewMonster.SetHp(0);

    Player NewPlayer = Player();
    NewPlayer.Att = 20;





    // 보통 행동을 만들 public으로 만듭니다.
    // NewPlayer.Att

    // 객체의 사용법 . 누르고 
    // 플레이어 내부에 있는 것들을 끄집어 내서 사용한다.
    // NewPlayer.Att


    

    // NewPlayer.Speed
}
