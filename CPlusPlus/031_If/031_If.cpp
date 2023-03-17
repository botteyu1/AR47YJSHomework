// 031_If.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int ReturnValue() 
{
	return 10;
}


int main()
{
	// if (메모리영역)
	// {
	//    실행코드
	// }
	// 참이면 실행코드가 실행되고
	// 거짓이면 실행코드가 실행되지 않습니다.


	int Value = ReturnValue();
	if (Value)
	{
		printf_s("실행됩니다");
	}

	if (ReturnValue())
	{
		printf_s("실행됩니다1");
	}

	// 한줄치기 극혐
	if (ReturnValue())
		printf_s("실행됩니다1");

	if (0);

	{
		printf_s("실행됩니다1");
	}


	if (printf_s("10"), 0)
	{
		printf_s("실행됩니다0");
	}
	else if(0)
	{
		printf_s("실행됩니다1");
	}
	else if (0)
	{
		printf_s("실행됩니다2");
	}
	else if (0)
	{
		printf_s("실행됩니다1");
	}
	else if (0)
	{
		printf_s("실행됩니다2");
	}
	else
	{
		// 모든 if문들이 실패하면 무조건 else내부의 코드가 실행됩니다.
		printf_s("다 실패해서 실행됩니다");
	}


}
