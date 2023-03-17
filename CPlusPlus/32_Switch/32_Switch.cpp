// 32_Switch.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 자동완성 기능
    // swi 치고 tab

    // 컨트롤 + 스페이스


    // case 상수 메모리만 올수 있습니다.

    int Check = 0;

    // if(메모리) 메모리영역이 참인지 거짓인지를 판단해서 코드를 실행해주는 
    // 조건문이에요.

    // switch(메모리)영역과 완전히 같은 상수 메모리가 있는지 비교해주는 
    // 조건문이고.

    const int CheckValue = 0;
    
    int Value = 0;
    switch (Value)
    {
    // case Check:
    case CheckValue:
    {
        int a = 0;
        printf_s("Value 0");
        break;
    }
    case 1:
    {
        printf_s("Value 1");
        break;
    }
    case 2:
    {
        printf_s("Value 2");
        break;
    }
    case 3:
    {
        printf_s("Value 3");
        break;
    }
    default:
    {
        printf_s("Value not");
        break;
    }
    }
    
    char InputKey = 'A';

    switch (InputKey)
    {
    case 'a':
    case 'A':
        printf_s("에이를 쳤습니다.");
        break;
    default:
        break;
    }
}
