// 051_ClassConst.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player 
{
public:
    static void GlobalFunction() /*const*/// const로 만들 this가 존재하지 않으므로 붙이지 못한다.
    {
        // 객체가 필요없이 호출할수 있기 때문에
        // == this가 존재하지 않는 함수가 됩니다.
        // this가 존재하지 않으므로 함수 뒤에 const를 붙일수가 없게됩니다.
        // const로 만들 this가 없다
        // this;
    }

    void SetHp(int _Value)
    {
        Hp = _Value;
    }

    int GetHp() const
    {
        return Hp;
    }

    // 맴버함수뒤에는 const를 붙일수 있다.

    // 이함수를 호출한다고 해도
    // 이 클래스를 통해서 만들어진 객체는 변화하지 않을거야.
    void PrintStatus(/*const Player* const this*/) const
    {
        // this;
        // 맴버함수 뒤에 const를 고치면 맴버변수를 고칠수 없다.
        // this->Att += 100;

        printf_s("플레이어의 능력치 ------------------------\n");

        printf_s("공격력 : %d\n", this->Att);

        printf_s("체  력 : %d\n", this->Hp);

        printf_s("----------------------------------------\n");
    }


protected:

private:
    int Hp = 100;
    int Att = 10;
};

int main()
{
    Player::GlobalFunction();

    Player NewPlayer = Player();

    // 일반적인 맴버함수는 객체를 필요로하고
    // 그 객체가 this가 되어주는것이다.
    NewPlayer.PrintStatus(/*&NewPlayer*/);
    NewPlayer.PrintStatus();
    NewPlayer.PrintStatus();
    NewPlayer.PrintStatus();
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
