// 037_typedef.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 이제부터 자료형  unsigned __int64를 size_t라고 부르겠다.
// typedef         unsigned __int64 size_t;
// unsigned __int64 == size_t

// 유저가 정의한 자료형이라고 부릅니다.
// 사용자 정의 자료형의 일종입니다.
// 모든 문법은 인간이 편해지기 위해서 만든것이다.

//typedef __time64_t time_t;
//typedef __int64                       __time64_t;


typedef int myint;

typedef myint mymyint;

// 둘의 효과는 똑같고 using 
using MMInt = int;

int main()
{
    MMInt Ma = 30;

    // 지역변수 선언
    // 최초로 만들어진 시점.
    int Value = 20;

    time_t DTime = time(0);
    Value = 20;
}
