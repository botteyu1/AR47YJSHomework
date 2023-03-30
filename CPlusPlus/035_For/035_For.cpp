// 035_For.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

int PrintInit() 
{
	printf_s("초기화문\n");
	_getch();

	return 0;
}

int PrintTrue()
{
	printf_s("조건문\n");
	_getch();
	return 1;
}


int Code()
{
	printf_s("조건문\n");
	_getch();
	return 1;
}


int PrintPlus()
{
	printf_s("증감문\n");
	_getch();
	return 1;
}

int main()
{
	int Count = 0;
	while (Count <= 10)
	{
		++Count;
	}


	// 비교문의 조건이 false가 되면 for문이 종료된다.
	for (int i = 0; i < 100; i++) 
	{

	}

	// 이렇게 사용하는 경우는 거의 없다.
	for (;/*true*/;)
	{
		int a = 0;
	}

	for (
		int i = 0; // 초기화문
		i < 5;  // 비교문
		i++ // 증감문
		)
	{
		int a = 0;
		// Code(); // 실행코드
	}

    
}
