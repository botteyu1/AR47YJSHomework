// 030_PointerOperator000.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{

    int Value = 0;

    __int64 Address = 0;

    // 100번지
    int* Ptr = &Value;

    // 나의 주소값을 100번지 + sizeof(int) * 1;
    Address = (__int64)Ptr;
    Ptr = Ptr + 1;
    Address = (__int64)Ptr;
    Ptr = Ptr - 1;
    Address = (__int64)Ptr;
    Ptr += 1;
    Address = (__int64)Ptr;
    Ptr = Ptr + 5;
    Address = (__int64)Ptr;
}
