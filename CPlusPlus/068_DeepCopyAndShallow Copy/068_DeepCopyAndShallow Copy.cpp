// 068_DeepCopyAndShallow Copy.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class A 
{
public:
    int* NewInt = nullptr;

    void Create() 
    {
        NewInt = new int();
    }

    void operator = (const A& _Other) 
    {
         // 이걸 얕은 복사라고 하게 된다.
         // NewInt = _Other.NewInt;
        if (nullptr == _Other.NewInt)
        {
            //if (nullptr != NewInt)
            //{
            //    delete NewInt;
            //    NewInt = nullptr;
            //}
            return;
        }

        if (nullptr == NewInt)
        {
            // 딥카피의 준비를 한것.
            Create();
        }

        // 각클래스가 자신만의 메모리를 만들어야 한다는 것이다.
        *NewInt = *_Other.NewInt;

        return;
    }


public:
    ~A() 
    {
        if (nullptr != NewInt)
        {
            delete NewInt;
            NewInt = nullptr;
        }
    }
};

int main()
{
    {
        A NewInt0;
        A NewInt1;

        NewInt0.Create();

        NewInt0 = NewInt1;
    }

    //           100
    int* NewInt0 = new int();

    //           100
    int* NewInt1 = NewInt0;

    if (nullptr != NewInt0)
    {
        delete NewInt0;
        NewInt0 = nullptr;
    }

    // ???????? NewInt1

    if (nullptr != NewInt1)
    {
        delete NewInt0;
        NewInt0 = nullptr;
    }

    std::cout << "Hello World!\n";
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
