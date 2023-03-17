// 017_Printf.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{

    // 콘솔창에 글자를 띄운다.
    // printf_s("aaaaa");

    // 지금은 일단 사용법만 배우고 좀더 자세히 알아봅시다.

    //char Arr[5] = "abc";
    //printf_s(Arr);

    1;
    '1';
    '2';
    '3';
    // 문자 

    // 숫자 1
    // "12345" 문자열 상수 표현식
    // 문자열 상수 표현식을 사용하면 무조건 마지막에 컴파일러가 알아서
    // 0을 붙이기 때문에 
    char Arr[6] = "12345"/*0*/;
    // 컨트롤 + k + c 내가 선택한 범위 주석
    // char Arr[5] = {'1', '2','3','4',0/*'5'*/};

    // 자료형이 다르기 때문에 오른쪽에서 왼쪽으로 들어가지 못한다.
    // char Value1 = Arr;

    // 제로베이스 기반.
    // 배열의 개수를 샐때 0부터 세는것을 
    // 제로베이스 기반 인덱스 표현이라고 합니다.
    char Value1 = Arr[0];
    char Value2 = Arr[1];
    char Value3 = Arr[2];
    char Value4 = Arr[3];
    char Value5 = Arr[4];

    printf_s(Arr);
}
