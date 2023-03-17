// 021_Pointer001.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//        100     108     116
void Test(int _1, int _2, int _3)
{
    int* ValuePtr0 = &_1;
    int* ValuePtr1 = &_2;
    int* ValuePtr2 = &_3;

    __int64 Address0 = 0;
    __int64 Address1 = 0;
    __int64 Address2 = 0;

    Address0 = (__int64)ValuePtr0;
    Address1 = (__int64)ValuePtr1;
    Address2 = (__int64)ValuePtr2;
}

int main()
{
    {
        int Value0 = 0;
        int Value1 = 0;

        // &가 특정 변수의 메모리 영역의 주소값을 끌어내는 것이다.
        int* ValuePtr0 = &Value0;
        int* ValuePtr1 = &Value1;

        __int64 Address0 = 0;
        __int64 Address1 = 0;

        Address0 = (__int64)ValuePtr0;
        Address1 = (__int64)ValuePtr1;
        int a = 0;

    }

    {
        int Arr[3] = {};

        // Arr n번지라면
        // n번지 + sizeof(int) * 정수
        int* ValuePtr0 = &Arr[0];
        int* ValuePtr1 = &Arr[1];
        int* ValuePtr2 = &Arr[2];

        __int64 Address0 = 0;
        __int64 Address1 = 0;
        __int64 Address2 = 0;

        Address0 = (__int64)ValuePtr0;
        Address1 = (__int64)ValuePtr1;
        Address2 = (__int64)ValuePtr2;
        int a = 0;

    }

    {
        Test(312, 312, 312);
    }
}
