// 033_MyPrintf.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//              100       108
inline void Test(int Value, ...)
{
	__int64 Address = (__int64)&Value;
	int* Ptr = (int*)Address;

	int Value0 = Ptr[2];
	int Value1 = Ptr[4];
	int Value2 = Ptr[6];

	int a = 0;

}

// 200번지 부터 시작한다고 가정 인자
// 2개 들어갔습니다.
inline int MyPrintf(const char* const _Value, ...)
{
	// 200번지에있는 8바이트에 20번지라는

	// _Value ==> 20번지
	// &_Value ==> 200번지

	// 200번지를  200으로 바꿨습니다.
	__int64 Address = (__int64)&_Value;
	Address += 8;

	int Count = 0;

	while (0 != _Value[Count])
	{
		char Value = _Value[Count];
		if ('%' == Value)
		{
			++Count;
			char Format = _Value[Count];

			switch (Format)
			{
			case 'd':
			{
				int* ValuePtr = (int*)Address;
				int Value = *ValuePtr;
				printf_s("%d", Value);
				break;
			}
			case 's':
			{

				break;
			}
			default:
				break;
			}

			Address += 8;
		}
		else 
		{
			putchar(Value);
		}

		Count++;
	}

	return 0;
}

//      100 108 116 
// Test(int 첫번째인자 int 두번째인자 int int int) 
// {
// //      100
//    int* Ptr = &첫번째인자;
//    Ptr += 2; 첫번째인자
//    Ptr[2]
// }

void Test(int _1, int, int)
{
	__int64 Address = (__int64)&_1;
	Address += 8;
	int* _2 = (int*)Address;
	Address += 8;
	int* _3 = (int*)Address;


}

int main()
{
	// Test(10, 20, 30);

	// 100번지에있는 4바이트에 10이라는 값이 들어가 있다.
	int Value = 10;

	// printf_s("a%da");

	MyPrintf("a %d %d a", 111, 3222);
}
