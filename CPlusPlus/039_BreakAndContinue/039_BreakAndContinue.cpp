// 039_BreakAndContinue.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//while (true)
	//{
	//	if (true)
	//	{
	//		break;
	//	}
	//}

	//while (true)
	//{
		for (int i = 0; i < 100; i++)
		{
			if (0 == i % 2)
			{
				// switch문의 브레이크와는 다릅니다.
				// 반복문에서의 break는 가장 가까운 반복문을 탈출한다.
				// break;

				continue; // 가장 가까운 반복문의 조건문으로 바로 이동한다.
			}

			printf_s("%d\n", i);
		}

	//	if (true)
	//	{
	//		break;
	//	}
	//}

    
}
