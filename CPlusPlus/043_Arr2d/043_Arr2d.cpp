// 043_Arr2d.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 1바이트가 64기가 만큼 존재하는 1차원 배열

int main()
{
    // 궁극적으로 모든 배열은 결국 1차원 배열입니다.
    
    // [1][2]
    // [3][4]

    // 0  0  1  1
    // 0  1  0  1
    // [1][2][3][4]

    int Arr[2][2] = { {1, 2}, {3, 4} };

    __int64 Address00 = (__int64)&Arr[0][0];
    int Value00 = Arr[0][0];
    __int64 Address01 = (__int64)&Arr[0][1];
    int Value01 = Arr[0][1];
    __int64 Address10 = (__int64)&Arr[1][0];
    int Value10 = Arr[1][0];
    __int64 Address11 = (__int64)&Arr[1][1];
    int Value11 = Arr[1][1];
    int a = 0;
}
