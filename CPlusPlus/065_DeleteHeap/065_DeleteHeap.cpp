// 065_DeleteHeap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream> // crtdbg.h가 들어있다.

void MyDelete(int* Ptr) 
{
    // 지운다.
    delete Ptr;
    Ptr = nullptr;
}

void MyValueZero(int Value)
{
    Value = 0;
}

void MyValueTest(int& Value)
{
    Value = 0;
}

void main()
{
    int Test = 100;
    MyValueZero(Test);

    // 외우셔야 합니다.
    // 윈도우 전용 삭제하지 않은 힙 메모리 출력에 표시. 
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    // ::operator delete();

    int* NewInt = nullptr;

    if (nullptr == NewInt)
    {
        return;
    }

    MyValueTest(*NewInt);

    // 중복할당
    {
        int* Newint = new int();
        Newint = new int();
        delete Newint;
    }

    // 아래와 같이 한번 할당한건 지우고 다시 받아서 사용하면 된다.
    {
        int* Newint = new int();
        delete Newint;
        Newint = new int();
        delete Newint;
    }

    {
        // 운영체제한테 부탁하는 겁니다.
        // 어떤 일이 있었건 운영체제가 할당 못하면 
        int* Newint = new int();

        // 습관 <= 
        if (nullptr == Newint)
        {
            return;
        }
        *Newint = 20;

        delete Newint;
    }

    // 지운거 또지우기
    // 댕글링 포인터라고 합니다.
    {
        int* Newint = new int();

        delete Newint;
        // 메모리 크러쉬라고 합니다.
        // delete Newint;
    }

    // 지운거 또지우기
    // 댕글링 포인터라고 합니다.
    {

        int Value = int(10);

        int* Newint = new int (10);

        // 안전한 삭제
        if (nullptr != Newint)
        {
            delete Newint;
            // Newint 500번지가 삭제되지 않고 남아있는게 당연한겁니다.
            Newint = nullptr;
        }

        // 안전한 삭제
        if (nullptr != Newint)
        {
            delete Newint;
            Newint = nullptr;
        }

        // 메모리 크러쉬라고 합니다.
        // delete Newint;
    }

    
    {
        int* NewPtr = new int();

        if (nullptr != NewPtr)
        {
            operator delete(NewPtr);
            NewPtr = nullptr;
        }

        // MyDelete(NewPtr);
    }
}
