// 45 NameSapce.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


// 범위 확인
namespace AProgramer
{
    class Item
    {

    };
}

namespace BProgramer
{
    class Item
    {

    };

    namespace UseEl
    {
    }
}

namespace BProgramer
{
    class Player 
    {
    };
}

namespace std 
{
    void TestFunction() 
    {

    }
}

// 실제적으로 플레이어의 스펙이나 만들어질대의 내용들은 코드영역에 들어가 있게 된다.
// 플레이어가 만들어지면 내부에 int Att를 하나 가지고 있어야 해...
class Player 
{
public:
    int Att;
};

class Monster
{
public:
    int Att;
};

void Test()
{
    int Att;
};

// 절대로 사용하지 않습니다.
using namespace AProgramer;
// Namespace를 생략할수 있다면 생략해라.
using namespace BProgramer;

int main()
{
    // Player::Att;
    // Monster::Att;

    // ::

    // 
    //BProgramer::Item NewItemB;
    //AProgramer::Item NewItemA;

    BProgramer::Item NewItemA;
    AProgramer::Item NewItemB;

    int Value = 20;

    if (true)
        printf_s("aaaaa");

    // for (size_t i = 0; i < length; i++) {
    // }

    // std c++ 스탠다드의 약어
    // c++공인이다.
    // c++만든 사람들이 품질 보증한 객체 혹은 클래스 혹은 모든 코드적 요소들

    // std::TestFunction();

    std::cout << "Hello World!\n";
}
